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
 * OAIMultilingual_ApikeyDescription.h
 *
 * Description of the API Key
 */

#ifndef OAIMultilingual_ApikeyDescription_H
#define OAIMultilingual_ApikeyDescription_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIMultilingual_ApikeyDescription : public OAIObject {
public:
    OAIMultilingual_ApikeyDescription();
    OAIMultilingual_ApikeyDescription(QString json);
    ~OAIMultilingual_ApikeyDescription() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSApikeyDescription1() const;
    void setSApikeyDescription1(const QString &s_apikey_description1);
    bool is_s_apikey_description1_Set() const;
    bool is_s_apikey_description1_Valid() const;

    QString getSApikeyDescription2() const;
    void setSApikeyDescription2(const QString &s_apikey_description2);
    bool is_s_apikey_description2_Set() const;
    bool is_s_apikey_description2_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_apikey_description1;
    bool m_s_apikey_description1_isSet;
    bool m_s_apikey_description1_isValid;

    QString m_s_apikey_description2;
    bool m_s_apikey_description2_isSet;
    bool m_s_apikey_description2_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIMultilingual_ApikeyDescription)

#endif // OAIMultilingual_ApikeyDescription_H
