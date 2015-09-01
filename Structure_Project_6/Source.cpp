#include <iostream>
#include <string>
using namespace std;

struct Item
{
	string ItemName;
	int sellingcost;
	int stockingcost;
	int stock;
	bool known;
	bool listed;
};

struct Shop
{
	int gold;
	Item ShopItems[20];
};

Shop RPGShop;

int PurchaseTotal(int quantity, int priceperitem)
{
	int PurchaseCost;
	PurchaseCost = quantity * priceperitem;
	return PurchaseCost;
}

void ManageShop(Shop YourShop)
{
	int j;
	cout << "Hello Shop Owner! You have successfully set up shop in town! Let's go over what you have for now, shall we?" << endl;
	cout << "(You will now be shown how much gold and how many items you have for sale.)" << endl << endl;
	cout << "Let's check how much gold you have on you. You have " << YourShop.gold << " gold! But if you manage your shop well enough you may see a couple of zeroes the next time you check." << endl << endl;
	cout << "Now, let's check the inventory room and see what we have to work with." << endl << endl;
	system("pause");
	system("cls");
	for (int i = 0; i < 20; i++)
	{
		if (YourShop.ShopItems[i].stock > 0)
		{
			cout << YourShop.ShopItems[i].stock << " " << YourShop.ShopItems[i].ItemName << ": " << "Selling Price: Unlisted" << endl;
		}
		else
		{
			continue;
		}
	}
	cout << endl << "Well, looks like you have a decent inventory, but you don't have any prices listed to sell the items! But don't worry, I'll show you how to fix that. Check this out." << endl << endl;
	system("pause");
	system("cls");
	cout << "1 Manage item prices" << endl << "2 Manage stock" << endl << "3 Sell items" << endl << "4 Check gold" << endl << "0 Quit Game" << endl << endl << "What you see is your main menu which allows you to do various things!";
	cout << " But right now we need to manage your item prices. When prompted, enter the number 1 and we'll get your prices set up. ";
	int x;
	cin >> x;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (x == 1)
		{
			system("cls");
			cout << "Yay, you did it! Okay, now, we're going to set up the price for an item." << endl << endl;
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	cout << "Known Shop Items:" << endl;
	for (int i = 0; i < 20; i++)
	{
		if (YourShop.ShopItems[i].known == 1)
		{
			cout << i + 1 << " " << YourShop.ShopItems[i].ItemName << ": Stocking Price: " << YourShop.ShopItems[i].stockingcost << ", ";
			if (YourShop.ShopItems[i].sellingcost > 0)
			{
				cout << "Selling Price: " << YourShop.ShopItems[i].sellingcost << endl;
			}
			else
			{
				cout << "Selling Price: Unlisted" << endl;
			}
		}
		else
		{
			continue;
		}
	}
	cout << "0 Back to Main Menu" << endl;
	cout << endl << "This is a list of all the items you know of! You know of most, but there a couple that you don't have yet. Don't worry, once an item is known, it never becomes unknown. ";
	cout << "Unless a sexy Wicked Witch comes by and makes you forget! But I doubt that will happen. Hey, cheer up, because now we're going to set a price! Now, enter 1 when prompted and we will ";
	cout << "set the very first price this shop will see! ";
	cin >> j;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (j == 1)
		{
			j--;
			system("cls");
			cout << "Great, so now you have just selected the Health Potion item. Right now, it's price is unlisted. We're going to fix that." << endl << "Okay, so you can see some info about the item.";
			cout << "Notice the Stocking Cost. This is how much this item costs for you to buy and fill up your stock. If you plan on having this store be a success you should have the Selling Price ";
			cout << "be a larger number than the Stocking Price." << "Here, go ahead and enter a new Selling Price for the Health Potion." << endl << endl;
			cout << YourShop.ShopItems[j].ItemName << ": Stocking Price: " << YourShop.ShopItems[j].stockingcost << ", Selling Price: ";
			cin >> YourShop.ShopItems[j].sellingcost;
			YourShop.ShopItems[j].listed = 1;
			cout << endl;
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> j;
			cout << endl;
		}
	}
	cout << endl << "Great! Now remember, at any time you can change the Selling Price of the item. So don't worry if you set it at a price you don't want. Let's check the Known Shop Items again." << endl << endl;
	system("pause");
	system("cls");
	cout << endl << "Known Shop Items:" << endl;
	for (int i = 0; i < 20; i++)
	{
		if (YourShop.ShopItems[i].known == 1)
		{
			cout << i + 1 << " " << YourShop.ShopItems[i].ItemName << ": Stocking Price: " << YourShop.ShopItems[i].stockingcost << ", ";
			if (YourShop.ShopItems[i].listed == 1)
			{
				cout << "Selling Price: " << YourShop.ShopItems[i].sellingcost << endl;
			}
			else
			{
				cout << "Selling Price: Unlisted" << endl;
			}
		}
		else
		{
			continue;
		}
	}
	cout << "0 Go Back to Main Menu" << endl;
	cout << endl << "So, now you know how to change the price. Let's go back to the Main Menu! You can go back to the Main Menu by typing 0. ";
	cin >> x;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (x == 0)
		{
			system("cls");
			cout << "1 Manage item prices" << endl << "2 Manage stock" << endl << "3 Sell items" << endl << "4 Check gold" << endl << "0 Quit Game" << endl << endl;
			cout << "Okay, so now we're back to the Main Menu. The next part we should go over is how to buy stock! Let's do like we did last time we were at the Main Menu but this time we will enter ";
			cout << " 2 to manage our stock. ";
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	cin >> x;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (x == 2)
		{
			system("cls");
			cout << "Welcome to where you will buy items to stock your inventory and sell to adventurers!" << endl << endl;
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	cout << "Available Stocks:" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << i + 1 << " " << YourShop.ShopItems[i].ItemName << ": Stocking Price: " << YourShop.ShopItems[i].stockingcost << endl;
	}
	cout << "0 Go Back to Main Menu" << endl << endl << "Now that we are here, let's buy some more stock! We're going to buy five more Health Potions to sell. Enter 1 when prompted to get to the ";
	cout << "buying screen. ";
	cin >> j;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (j == 1)
		{
			j--;
			system("cls");
			cout << YourShop.ShopItems[j].ItemName << ": Stocking Price: " << YourShop.ShopItems[j].stockingcost << endl << "Buy Stock?" << endl << "1 Yes" << endl << "0 No" << endl;
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	cout << endl << "We are going to buy stock, so enter 1." << endl;
	cin >> x;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (x == 1)
		{
			system("cls");
			cout << "Enter the quantity of stock you are going to buy or enter 0 to go back: " << endl << endl << "Now, we are buying 5 Health Potions, so enter 5 when prompted." << endl;
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	int y = 0;
	cin >> y;
	YourShop.gold = YourShop.gold - PurchaseTotal(y, YourShop.ShopItems[j].stockingcost);
	YourShop.ShopItems[j].stock += y;
	cout << endl;
	system("cls");
	cout << "Congratulations! You have made your first stock purchase! You can see for yourself how things have changed later. For now, let's go back to the Main Menu. When prompted, press 0 to go back to";
	cout << " the Main Menu." << endl << endl << "Available Stocks:" << endl;
	for (int i = 0; i < 20; i++)
	{
		cout << i + 1 << " " << YourShop.ShopItems[i].ItemName << ": Stocking Price: " << YourShop.ShopItems[i].stockingcost << endl;
	}
	cout << "0 Go Back to Main Menu" << endl;
	cin >> x;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (x == 0)
		{
			system("cls");
			cout << "1 Manage item prices" << endl << "2 Manage stock" << endl << "3 Sell items" << endl << "4 Check gold" << endl << "0 Quit Game" << endl << endl;
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	cout << "Well, it's time to take your shop to the next step. We are going to sell some items! So, enter 3 when you are prompted." << endl;
	cin >> x;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (x == 3)
		{
			system("cls");
			cout << "Items for sale:" << endl;
			for (int i = 0; i < 20; i++)
			{
				if (YourShop.ShopItems[i].stock > 0)
				{
					cout << i + 1 << " " << YourShop.ShopItems[i].stock << " " << YourShop.ShopItems[i].ItemName << ": ";
					if (YourShop.ShopItems[i].listed == 1)
					{
						cout << "Selling Price: " << YourShop.ShopItems[i].sellingcost << endl;
					}
					else
					{
						cout << "Selling Price: Unlisted" << endl;
					}
				}
				else
				{
					continue;
				}
			}
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	cout << "0 Go Back to Main Menu" << endl << endl;
	cout << endl << "For now you can only sell the Health Potions because they are the only items with a set price. So we'll sell 3 of the Health Potions. Enter 1 when prompted. ";
	cin >> j;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (j == 1)
		{
			j--;
			system("cls");
			cout << "We're on our way to making our first sale. Now, we do want to sell some Health Potions, so enter 1 when prompted." << endl << endl << YourShop.ShopItems[j].ItemName << ": ";
			cout << "Selling Price: " << YourShop.ShopItems[j].sellingcost << endl << "Do you wish to sell some of this item?" << endl << "1 Yes" << endl << "0 No" << endl;
			break;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	cin >> x;
	cout << endl;
	system("cls");
	for (int i = 0; i < 2; i++)
	{
		if (x == 1)
		{
			cout << "How many " << YourShop.ShopItems[j].ItemName << "s do you wish to sell? " << endl << endl << "Remember, we are going to sell 3 Health Potions. So enter 3 when prompted." << endl;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
	cin >> y;
	YourShop.gold = YourShop.gold + PurchaseTotal(y, YourShop.ShopItems[j].sellingcost);
	YourShop.ShopItems[j].stock -= y;
	cout << endl;
	system("cls");
	cout << "Woot! You made your first sale! Now, we need to do one last thing before I let you manage your shop on your own. So enter 0 when prompted to get back to the Main Menu." << endl << endl;
	cout << "Items for sale:" << endl;
	for (int i = 0; i < 20; i++)
	{
		if (YourShop.ShopItems[i].stock > 0)
		{
			cout << i + 1 << " " << YourShop.ShopItems[i].stock << " " << YourShop.ShopItems[i].ItemName << ": ";
			if (YourShop.ShopItems[i].listed == 1)
			{
				cout << "Selling Price: " << YourShop.ShopItems[i].sellingcost << endl;
			}
			else
			{
				cout << "Selling Price: Unlisted" << endl;
			}
		}
		else
		{
			continue;
		}
	}








}

int main()
{
	RPGShop.gold = 100;
	RPGShop.ShopItems[0] = { "Health Potion", 0, 5, 5, 1, 0 };
	RPGShop.ShopItems[1] = { "Mana Potion", 0, 5, 5, 1, 0 };
	RPGShop.ShopItems[2] = { "Short Bow", 0, 10, 3, 1, 0 };
	RPGShop.ShopItems[3] = { "Long Bow", 0, 15, 1, 1, 0 };
	RPGShop.ShopItems[4] = { "5 Arrows", 0, 10, 2, 1, 0 };
	RPGShop.ShopItems[5] = { "Crossbow", 0, 12, 2, 1, 0 };
	RPGShop.ShopItems[6] = { "5 Bolts", 0, 10, 2, 1, 0 };
	RPGShop.ShopItems[7] = { "Short Sword", 0, 10, 3, 1, 0 };
	RPGShop.ShopItems[8] = { "Long Sword", 0, 15, 1, 1, 0 };
	RPGShop.ShopItems[9] = { "Claymore", 0, 20, 0, 0, 0 };
	RPGShop.ShopItems[10] = { "One-handed Axe", 0, 12, 2, 1, 0 };
	RPGShop.ShopItems[11] = { "Two-handed Axe", 0, 17, 0, 0, 0 };
	RPGShop.ShopItems[12] = { "One-handed Hammer", 0, 12, 2, 1, 0 };
	RPGShop.ShopItems[13] = { "Two-handed Hammer", 0, 17, 0, 0, 0 };
	RPGShop.ShopItems[14] = { "Spear", 0, 14, 1, 1, 0 };
	RPGShop.ShopItems[15] = { "Dagger", 0, 8, 4, 1, 0 };
	RPGShop.ShopItems[16] = { "Shield", 0, 10, 3, 1, 0 };
	RPGShop.ShopItems[17] = { "Robes", 0, 5, 5, 1, 0 };
	RPGShop.ShopItems[18] = { "Leather", 0, 10, 3, 1, 0 };
	RPGShop.ShopItems[19] = { "Plate", 0, 20, 0, 0, 0 };
	ManageShop(RPGShop);
	system("pause");
	return 0;
}