#ifndef _APPLICATION_UI_MANAGER_HPP
#define _APPLICATION_UI_MANAGER_HPP

# include <QObject>

class UiManager : public QObject
{
    Q_OBJECT

public:

    UiManager(QObject *parent = nullptr);

};

#endif // _APPLICATION_UI_MANAGER_HPP
