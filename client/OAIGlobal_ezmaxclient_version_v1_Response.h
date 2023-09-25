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
 * OAIGlobal_ezmaxclient_version_v1_Response.h
 *
 * Response for GET /1/ezmaxclient/{pksEzmaxclientOs}/version
 */

#ifndef OAIGlobal_ezmaxclient_version_v1_Response_H
#define OAIGlobal_ezmaxclient_version_v1_Response_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {

class OAIGlobal_ezmaxclient_version_v1_Response : public OAIObject {
public:
    OAIGlobal_ezmaxclient_version_v1_Response();
    OAIGlobal_ezmaxclient_version_v1_Response(QString json);
    ~OAIGlobal_ezmaxclient_version_v1_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSEzmaxclientVersion() const;
    void setSEzmaxclientVersion(const QString &s_ezmaxclient_version);
    bool is_s_ezmaxclient_version_Set() const;
    bool is_s_ezmaxclient_version_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_s_ezmaxclient_version;
    bool m_s_ezmaxclient_version_isSet;
    bool m_s_ezmaxclient_version_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIGlobal_ezmaxclient_version_v1_Response)

#endif // OAIGlobal_ezmaxclient_version_v1_Response_H
