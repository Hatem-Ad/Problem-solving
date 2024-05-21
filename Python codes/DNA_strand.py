def DNA_strand(dna):
    dnaR = ""
    for i in range(len(dna)):
        if dna[i] == "A":
            dnaR = dnaR + "T"
        elif dna[i] == "T":
            dnaR = dnaR + "A"
        elif dna[i] == "C":
            dnaR = dnaR + "G"
        elif dna[i] == "G":
            dnaR = dnaR + "C"
    return dnaR
