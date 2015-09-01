#include <iostream>
#include <string>
using namespace std;

struct Item
{
	string ItemName;
	int sellingcost;
	int stockingcost;
	int stock;
};

struct Shop
{
	int gold;
	Item ShopItems[20];
};

void ManageShop(Shop YourShop)
{
	cout << "Hello Shop Owner! You have successfully set up shop in town! Let's go over what you have for now, shall we?" << endl;
	cout << "(You will now be shown how much gold and how many items you have for sale.)" << endl << endl;
	cout << "Let's check how much gold you have on you. You have " << YourShop.gold << " gold! But if you manage your shop well enough you may see a couple of zeroes the next time you check." << endl << endl;
	cout << "Now, let's check the inventory room and see what we have to work with." << endl;
	for (int i = 0; i < 20; i++)
	{
		if (YourShop.ShopItems[i].stock > 0)
		{
			cout << YourShop.ShopItems[i].stock << " " << YourShop.ShopItems[i].ItemName << " " << "Selling Price: Unlisted" << endl;
		}
		else
		{
			continue;
		}
	}
	cout << endl << "Well, looks like you have a decent inventory, but you don't have any prices listed to sell the items! But don't worry, I'll show you how to fix that. Check this out." << endl << endl;
	cout << "1 Manage item prices" << endl << "2 Manage stock" << endl << "3 Sell items" << endl << "0 Quit Game" << endl << endl << "What you just saw was your main menu which allows you to do various things!";
	cout << " But right now we need to manage your item prices. When prompted, enter the number 1 and we'll get your prices set up. ";
	int x;
	cin >> x;
	cout << endl;
	for (int i = 0; i < 2; i++)
	{
		if (x == 1)
		{
			cout << "Yay, you did it! Okay, now, we're going to set up the price for an item." << endl;
		}
		else
		{
			i = 0;
			cout << "Hey, you entered the wrong character! Try again. ";
			cin >> x;
			cout << endl;
		}
	}
















}

int main()
{
	Shop RPGShop;
	RPGShop.gold = 100;
	RPGShop.ShopItems[0] = { "Health Potion", 0, 5, 5 };
	RPGShop.ShopItems[1] = { "Mana Potion", 0, 5, 5 };
	RPGShop.ShopItems[2] = { "Short Bow", 0, 10, 3 };
	RPGShop.ShopItems[3] = { "Long Bow", 0, 15, 1 };
	RPGShop.ShopItems[4] = { "5 Arrows", 0, 10, 2 };
	RPGShop.ShopItems[5] = { "Crossbow", 0, 12, 2 };
	RPGShop.ShopItems[6] = { "5 Bolts", 0, 10, 2 };
	RPGShop.ShopItems[7] = { "Short Sword", 0, 10, 3 };
	RPGShop.ShopItems[8] = { "Long Sword", 0, 15, 1 };
	RPGShop.ShopItems[9] = { "Claymore", 0, 20, 0 };
	RPGShop.ShopItems[10] = { "One-handed Axe", 0, 12, 2 };
	RPGShop.ShopItems[11] = { "Two-handed Axe", 0, 17, 0 };
	RPGShop.ShopItems[12] = { "One-handed Hammer", 0, 12, 2 };
	RPGShop.ShopItems[13] = { "Two-handed Hammer", 0, 17, 0 };
	RPGShop.ShopItems[14] = { "Spear", 0, 14, 1 };
	RPGShop.ShopItems[15] = { "Dagger", 0, 8, 4 };
	RPGShop.ShopItems[16] = { "Shield", 0, 10, 3 };
	RPGShop.ShopItems[17] = { "Robes", 0, 5, 5 };
	RPGShop.ShopItems[18] = { "Leather", 0, 10, 3 };
	RPGShop.ShopItems[19] = { "Plate", 0, 20, 0 };
	ManageShop(RPGShop);
	system("pause");
	return 0;
}