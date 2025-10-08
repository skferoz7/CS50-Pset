import csv
import sys


def main():
    # Ensure proper usage
    if len(sys.argv) != 3:
        print("Usage: python dna.py data.csv sequence.txt")
        sys.exit(1)

    # Read database file into a variable
    with open(sys.argv[1], newline='') as database_file:
        reader = csv.DictReader(database_file)
        dna_database = list(reader)  # list of dictionaries

    # Read DNA sequence file into a variable
    with open(sys.argv[2], "r") as sequence_file:
        dna_sequence = sequence_file.read()

    # Get the list of STRs (from CSV header)
    str_names = list(dna_database[0].keys())[1:]  # skip 'name'

    # Compute the longest match of each STR in the DNA sequence
    str_counts = {}
    for STR in str_names:
        str_counts[STR] = longest_match(dna_sequence, STR)

    # Compare against each person in the database
    for person in dna_database:
        match = True
        for STR in str_names:
            if int(person[STR]) != str_counts[STR]:
                match = False
                break
        if match:
            print(person["name"])
            return

    print("No match")


def longest_match(sequence, subsequence):
    """Returns length of the longest run of subsequence in sequence."""
    longest_run = 0
    sub_len = len(subsequence)
    seq_len = len(sequence)

    # Check each position in sequence
    for i in range(seq_len):
        count = 0

        # Keep checking if substring matches consecutively
        while True:
            start = i + count * sub_len
            end = start + sub_len

            # If substring matches, increase count
            if sequence[start:end] == subsequence:
                count += 1
            else:
                break

        # Update longest run found so far
        longest_run = max(longest_run, count)

    return longest_run


if __name__ == "__main__":
    main()
