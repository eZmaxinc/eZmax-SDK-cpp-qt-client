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

/*
 * Custom_Apikey.h
 *
 * A Custom Apikey Object
 */

#ifndef Custom_Apikey_H
#define Custom_Apikey_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Custom_Apikey : public Object {
public:
    Custom_Apikey();
    Custom_Apikey(QString json);
    ~Custom_Apikey() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSApikeyKey() const;
    void setSApikeyKey(const QString &s_apikey_key);
    bool is_s_apikey_key_Set() const;
    bool is_s_apikey_key_Valid() const;

    QString getSApikeySecret() const;
    void setSApikeySecret(const QString &s_apikey_secret);
    bool is_s_apikey_secret_Set() const;
    bool is_s_apikey_secret_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_apikey_key;
    bool m_s_apikey_key_isSet;
    bool m_s_apikey_key_isValid;

    QString m_s_apikey_secret;
    bool m_s_apikey_secret_isSet;
    bool m_s_apikey_secret_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Custom_Apikey)

#endif // Custom_Apikey_H
