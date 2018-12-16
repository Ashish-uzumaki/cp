
def compute(S, Xo):
    if (S < Xo):
        print("No such numbers exist")
    else :
        x = int((S - Xo) / 2)
        print(x)
        print(,(x + Xo))
S = 17
Xo = 13
compute(S, Xo)
