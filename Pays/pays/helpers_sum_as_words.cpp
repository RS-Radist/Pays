#include "helpers.h"
#include <QStringList>

namespace PAYS {
namespace HLP {
namespace {

QStringList cents = QStringList()
        <<QString::fromUtf8("")
        <<QString::fromUtf8("сто")
        <<QString::fromUtf8("двести")
        <<QString::fromUtf8("триста")
        <<QString::fromUtf8("четыреста")
        <<QString::fromUtf8("пятьсот")
        <<QString::fromUtf8("шестьсот")
        <<QString::fromUtf8("семьсот")
        <<QString::fromUtf8("восемьсот")
        <<QString::fromUtf8("девятьсот");

QStringList decs = QStringList()
        <<QString::fromUtf8("")
        <<QString::fromUtf8("десять")
        <<QString::fromUtf8("двадцать")
        <<QString::fromUtf8("тридцать")
        <<QString::fromUtf8("сорок")
        <<QString::fromUtf8("пятьдесят")
        <<QString::fromUtf8("шестьдесят")
        <<QString::fromUtf8("семьдесят")
        <<QString::fromUtf8("восемьдесят")
        <<QString::fromUtf8("девяносто");

QStringList ones = QStringList()
        <<QString::fromUtf8("")
        <<QString::fromUtf8("один")
        <<QString::fromUtf8("два")
        <<QString::fromUtf8("три")
        <<QString::fromUtf8("четыре")
        <<QString::fromUtf8("пять")
        <<QString::fromUtf8("шесть")
        <<QString::fromUtf8("семь")
        <<QString::fromUtf8("восемь")
        <<QString::fromUtf8("десять")
        <<QString::fromUtf8("десять")
        <<QString::fromUtf8("одиннадцать")
        <<QString::fromUtf8("двенадцать")
        <<QString::fromUtf8("тринадцать")
        <<QString::fromUtf8("четырнадцать")
        <<QString::fromUtf8("пятнаядцать")
        <<QString::fromUtf8("шестнадцать")
        <<QString::fromUtf8("семнадцать")
        <<QString::fromUtf8("восемнадцать")
        <<QString::fromUtf8("девятнадцать");

QStringList one = QStringList()
        << QString::fromUtf8("рубль")
        << QString::fromUtf8("тысяча")
        << QString::fromUtf8("миллион")
        << QString::fromUtf8("триллион")
        << QString::fromUtf8("квадрильон");

QStringList two = QStringList()
        << QString::fromUtf8("рубля")
        << QString::fromUtf8("тысячи")
        << QString::fromUtf8("миллиона")
        << QString::fromUtf8("триллиона")
        << QString::fromUtf8("квадрильона");

QStringList many = QStringList()
        << QString::fromUtf8("рублей")
        << QString::fromUtf8("тысяч")
        << QString::fromUtf8("миллионов")
        << QString::fromUtf8("триллионов")
        << QString::fromUtf8("квадрильонов");

}//namspace

QString dig3(const QString &value,bool female=false)
{
    int val=value.toInt() ;
    QString result="" ;
    result += cents[val/100];
    val %=100;
    if ( val>=20 ){
        result += " " + decs[val/10] ;
        val %= 10;
    }
    result += " " ;
    switch ( val )
    {
    case 1 :
        result+=female?QString::fromUtf8("одна"):ones [1] ;
        break;
    case 2 :
        result+=female?QString::fromUtf8("две"):ones [1] ;
        break;
    default:
        result += " " + ones[val] ;
        break;
    }
    return result.simplified() ;
}

QString sum_as_words(QString value)
{
    value=value.simplified();
    if (value.isEmpty())
    {
        return "";
    }


    QStringList L=value.split(QRegExp("[\\.,]"));
    QString rbl=L[0];
    QString cop=L.size()>1?L[1]:"00";
    QString result = "" ;




    if (rbl.toInt() <=0)
    {
       result=QString::fromUtf8("Ноль рублей") ;
    }
    else
    {
        for (int k=0;k<one.size();k++)
        {
            QString d3=rbl.right(3);
            if (d3.toInt()<= 0) continue;

            rbl.chop(3) ;
            QString R=dig3(d3,k==1) + " ";
            if (d3.toInt()==12)
            {
                R+=many[k];
            }
            else{
                switch (d3.right(1).toInt()){
                    case 1: R+=one[k];break;
                    case 2:
                    case 3:
                    case 4: R+=two[k];break;
                    default:R+=many[k];break;
                }
            }
            result = R + " " + result;
        }

    if (rbl.size()>0)
        return QString::fromUtf8("Сумаcшедшие деньги");
    result=result.simplified();
    }

    return result.left(1).toUpper()
            + result.mid(1).toLower()
            + " " +cop + QString::fromUtf8("коп.");

}

}//namespace HLP
}//namespace PAYS
