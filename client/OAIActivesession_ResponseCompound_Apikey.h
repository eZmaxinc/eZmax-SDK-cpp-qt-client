/**
 * eZmax API Definition
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.4
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIActivesession_ResponseCompound_Apikey.h
 *
 * An Activesession-&gt;Apikey object and children to create a complete structure
 */

#ifndef OAIActivesession_ResponseCompound_Apikey_H
#define OAIActivesession_ResponseCompound_Apikey_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIActivesession_ResponseCompound_Apikey : public OAIObject {
public:
    OAIActivesession_ResponseCompound_Apikey();
    OAIActivesession_ResponseCompound_Apikey(QString json);
    ~OAIActivesession_ResponseCompound_Apikey() override;

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

    qint32 pki_apikey_id;
    bool m_pki_apikey_id_isSet;
    bool m_pki_apikey_id_isValid;

    QString s_apikey_description_x;
    bool m_s_apikey_description_x_isSet;
    bool m_s_apikey_description_x_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIActivesession_ResponseCompound_Apikey)

#endif // OAIActivesession_ResponseCompound_Apikey_H
