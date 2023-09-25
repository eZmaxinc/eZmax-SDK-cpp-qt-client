/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.0
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Activesession_ResponseCompound_Apikey.h
 *
 * An Activesession-&gt;Apikey object and children to create a complete structure
 */

#ifndef Activesession_ResponseCompound_Apikey_H
#define Activesession_ResponseCompound_Apikey_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Activesession_ResponseCompound_Apikey : public Object {
public:
    Activesession_ResponseCompound_Apikey();
    Activesession_ResponseCompound_Apikey(QString json);
    ~Activesession_ResponseCompound_Apikey() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiApikeyId() const;
    void setPkiApikeyId(const qint32 &pki_apikey_id);
    bool is_pki_apikey_id_Set() const;
    bool is_pki_apikey_id_Valid() const;

    QString getSApikeyDescriptionX() const;
    void setSApikeyDescriptionX(const QString &s_apikey_description_x);
    bool is_s_apikey_description_x_Set() const;
    bool is_s_apikey_description_x_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_apikey_id;
    bool m_pki_apikey_id_isSet;
    bool m_pki_apikey_id_isValid;

    QString m_s_apikey_description_x;
    bool m_s_apikey_description_x_isSet;
    bool m_s_apikey_description_x_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Activesession_ResponseCompound_Apikey)

#endif // Activesession_ResponseCompound_Apikey_H
