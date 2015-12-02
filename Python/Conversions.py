#Logan Pletcher
#Game Loop Conersions Code

def main():
    Gameloop = True
    while(Gameloop):
        print("\nPlease enter the number of seconds you wish to be converted.")
        seconds = input()
        if seconds == 'Quit':
            Gameloop = False
        else:
            seconds = int(seconds,base=10)
            hours = seconds/3600
            hours = int(hours)
            print("Hour(s):",hours)
            minutes = (seconds - (hours*3600))/60
            minutes = int(minutes)
            print("Minute(s):",minutes)
            seconds = seconds - ((hours*3600)+(minutes*60))
            seconds = int(seconds)
            print("Second(s):",seconds)
        print("\nPlease enter the amount of pennies you want converted.")
        pennies = input()
        if pennies == 'Quit':
            Gameloop = False
        else:
            pennies = int(pennies,base=10)
            quarters = pennies/25
            quarters = int(quarters)
            print("Quarter(s):",quarters)
            dimes = (pennies - (quarters*25))/10
            dimes = int(dimes)
            print("Dime(s):",dimes)
            nickels = (pennies - ((quarters*25)+(dimes*10)))/5
            nickels = int(nickels)
            print("Nickel(s):",nickels)
            pennies = pennies - ((quarters*25)+(dimes*10)+(nickels*5))
            pennies = int(pennies)
            print("Pennie(s):",pennies)

main()
