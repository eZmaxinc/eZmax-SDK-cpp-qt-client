/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

#ifndef _ENUM_H
#define _ENUM_H

#include <QJsonValue>
#include <QMetaType>
#include <QString>

namespace Ezmaxapi {

class Enum {
public:
    Enum() {}

    Enum(QString jsonString) {
        fromJson(jsonString);
    }

    virtual ~Enum() {}

    virtual QJsonValue asJsonValue() const {
        return QJsonValue(jstr);
    }

    virtual QString asJson() const {
        return jstr;
    }

    virtual void fromJson(QString jsonString) {
        jstr = jsonString;
    }

    virtual void fromJsonValue(QJsonValue jval) {
        jstr = jval.toString();
    }

    virtual bool isSet() const {
        return false;
    }

    virtual bool isValid() const {
        return true;
    }

private:
    QString jstr;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Enum)

#endif // _ENUM_H
