#ifndef MISSILELAUNCHER_H
#define MISSILELAUNCHER_H

#include "Weapon.h"
#include <string>
using namespace std;

class MissileLauncher : public Weapon
{
public:
	MissileLauncher(int hp = 150, int ammo = 40, int damage = 100, int clip = 8, int capacity = 8, string type = "Missile Launcher");
	~MissileLauncher();
	void fire();
	void reload();

	void getStatus();

	void repair(int);

	void takeDamage(int);

	void addAmmo(int);

	void setAmmo(int);
	void setHp(int);
	void setDamage(int);
	void setType(string);
	void setCapacity(int);
	void setClip(int);
	
	int getAmmo();
	int getHp();
	int getDamage();
	string getType();
	int getCapacity();
	int getClip();

	//this weapon does not use ammo
	int getEnergy();
	void addEnergy(int);
	void setEnergy(int);

private:
	int hp;
	int ammo;
	int energy;
	int damage;
	int capacity;
	int clip;
	string type;
};

#endif