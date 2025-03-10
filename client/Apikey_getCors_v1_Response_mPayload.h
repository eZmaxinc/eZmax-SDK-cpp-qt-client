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
 * Apikey_getCors_v1_Response_mPayload.h
 *
 * Response for GET /1/object/apikey/{pkiApikeyID}/getCors
 */

#ifndef Apikey_getCors_v1_Response_mPayload_H
#define Apikey_getCors_v1_Response_mPayload_H

#include <QJsonObject>

#include "Cors_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Cors_ResponseCompound;

class Apikey_getCors_v1_Response_mPayload : public Object {
public:
    Apikey_getCors_v1_Response_mPayload();
    Apikey_getCors_v1_Response_mPayload(QString json);
    ~Apikey_getCors_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Cors_ResponseCompound> getAObjCors() const;
    void setAObjCors(const QList<Cors_ResponseCompound> &a_obj_cors);
    bool is_a_obj_cors_Set() const;
    bool is_a_obj_cors_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Cors_ResponseCompound> m_a_obj_cors;
    bool m_a_obj_cors_isSet;
    bool m_a_obj_cors_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Apikey_getCors_v1_Response_mPayload)

#endif // Apikey_getCors_v1_Response_mPayload_H
