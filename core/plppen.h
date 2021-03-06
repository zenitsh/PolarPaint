#ifndef PLPPEN_H
#define PLPPEN_H

#include <QString>

class PlpPen
{
public:
    PlpPen();
    void setSize(float);
    void setAlpha(float);
    void setName(QString);
    float size();
    float alpha();
    QString name();

private:
    float m_size;
    float m_alpha;
    QString m_name;
};

#endif // PLPPEN_H
