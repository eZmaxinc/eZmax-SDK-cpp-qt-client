/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Apikey_createObject_v2_Response_mPayload.h
 *
 * Payload for POST /2/object/apikey
 */

#ifndef Apikey_createObject_v2_Response_mPayload_H
#define Apikey_createObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Apikey_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Apikey_ResponseCompound;

class Apikey_createObject_v2_Response_mPayload : public Object {
public:
    Apikey_createObject_v2_Response_mPayload();
    Apikey_createObject_v2_Response_mPayload(QString json);
    ~Apikey_createObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Apikey_ResponseCompound> getAObjApikey() const;
    void setAObjApikey(const QList<Apikey_ResponseCompound> &a_obj_apikey);
    bool is_a_obj_apikey_Set() const;
    bool is_a_obj_apikey_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Apikey_ResponseCompound> m_a_obj_apikey;
    bool m_a_obj_apikey_isSet;
    bool m_a_obj_apikey_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Apikey_createObject_v2_Response_mPayload)

#endif // Apikey_createObject_v2_Response_mPayload_H
