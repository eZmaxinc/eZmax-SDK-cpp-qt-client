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
 * Apikey_regenerate_v1_Request.h
 *
 * Request for POST /1/object/apikey/{pkiApikeyID}/regenerate
 */

#ifndef Apikey_regenerate_v1_Request_H
#define Apikey_regenerate_v1_Request_H

#include <QJsonObject>


#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Apikey_regenerate_v1_Request : public Object {
public:
    Apikey_regenerate_v1_Request();
    Apikey_regenerate_v1_Request(QString json);
    ~Apikey_regenerate_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBApikeyIssigned() const;
    void setBApikeyIssigned(const bool &b_apikey_issigned);
    bool is_b_apikey_issigned_Set() const;
    bool is_b_apikey_issigned_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_b_apikey_issigned;
    bool m_b_apikey_issigned_isSet;
    bool m_b_apikey_issigned_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Apikey_regenerate_v1_Request)

#endif // Apikey_regenerate_v1_Request_H
