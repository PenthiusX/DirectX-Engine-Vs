#ifndef BULLET_H_INCLUDED
#define BULLET_H_INCLUDED

#include "GameEntity.h"
#include "Timer.h"

class Bullet : public GameEntity
{
public:
	Bullet(const D3DXVECTOR3 &position,
		const D3DXVECTOR3 &direction);

	void Update(System *system);
	void Render(Graphics *graphics) const;

private:

	D3DXVECTOR3 velocity_;

};

#endif // BULLET_H_INCLUDED
