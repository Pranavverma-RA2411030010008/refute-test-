print("------Welcome to Cricket High Score Calculator------\n")
print("------Please enter the number of runs scored by each player------\n")
scores={}
for i in range(1,12):
    while True:
        try:
            inpu = int(input(f"Enter the score for Player {i}: "))
            if 0<=inpu<=200:
                scores[f"Player {i}"] = inpu
                break
            else:
                print("Invalid input")
        except ValueError:
            print("Invalid input input")
highscore = max(scores, key=scores.get)
print(f"\nHighest Score: {highscore} with {scores[highscore]} runs")