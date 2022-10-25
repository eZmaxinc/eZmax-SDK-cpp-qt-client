/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.11
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignsignature_sign_v1_Request.h
 *
 * Request for POST /1/object/ezsignsignature/{pkiEzsignsignatureID}/sign
 */

#ifndef OAIEzsignsignature_sign_v1_Request_H
#define OAIEzsignsignature_sign_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignsignature_sign_v1_Request : public OAIObject {
public:
    OAIEzsignsignature_sign_v1_Request();
    OAIEzsignsignature_sign_v1_Request(QString json);
    ~OAIEzsignsignature_sign_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getSValue() const;
    void setSValue(const QString &s_value);
    bool is_s_value_Set() const;
    bool is_s_value_Valid() const;

    bool isBIsAutomatic() const;
    void setBIsAutomatic(const bool &b_is_automatic);
    bool is_b_is_automatic_Set() const;
    bool is_b_is_automatic_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString s_value;
    bool m_s_value_isSet;
    bool m_s_value_isValid;

    bool b_is_automatic;
    bool m_b_is_automatic_isSet;
    bool m_b_is_automatic_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_sign_v1_Request)

#endif // OAIEzsignsignature_sign_v1_Request_H