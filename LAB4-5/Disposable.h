#ifndef DISPOSABLE_H
#define DISPOSABLE_H

class Gun;

class Disposable : public Gun
{
public:
    void Attack() override;

private:
    bool flag { false };
};

#endif