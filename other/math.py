


def catchValue (maxHP, currentHP, catchRate):
    return (3*maxHP-2*currentHP)/(3*maxHP)*catchRate



def catchProb (maxHP, currentHP, catchRate):
    return (16/((16711680/catchValue(maxHP, currentHP, catchRate))**(1/4)))**4

with open ("safari.txt") as f:
    probs = []
    for line in f.readlines():
        name, hps, catchRate = line.split()
        curHP, maxHP = hps.split("/")
        curHP = float(curHP)
        maxHP = float(maxHP)
        catchRate = float(catchRate)
        probs.append(1 - catchProb(maxHP, curHP, catchRate))

    p = 1.0
    for i in probs:
        p *= i
    
    print(1 - p)
