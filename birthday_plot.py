import matplotlib.pyplot as plt
import pandas as pd
free = pd.read_csv('birthdays.csv')
#free.columns = ["Population","Probability"]
plt.plot(free["Population"],free["Probability"],"r-",label="Probability Dictribution")
plt.xlabel('Number of people')
plt.ylabel('Probability of Birthday match')
plt.title('Birthday Problem')
plt.grid(True)
plt.legend()
plt.show()
