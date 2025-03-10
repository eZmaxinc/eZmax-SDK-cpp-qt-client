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
 * Creditcardclient_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/creditcardclient/{pkiCreditcardclientID}
 */

#ifndef Creditcardclient_getObject_v2_Response_mPayload_H
#define Creditcardclient_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "Creditcardclient_ResponseCompound.h"

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Creditcardclient_ResponseCompound;

class Creditcardclient_getObject_v2_Response_mPayload : public Object {
public:
    Creditcardclient_getObject_v2_Response_mPayload();
    Creditcardclient_getObject_v2_Response_mPayload(QString json);
    ~Creditcardclient_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    Creditcardclient_ResponseCompound getObjCreditcardclient() const;
    void setObjCreditcardclient(const Creditcardclient_ResponseCompound &obj_creditcardclient);
    bool is_obj_creditcardclient_Set() const;
    bool is_obj_creditcardclient_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    Creditcardclient_ResponseCompound m_obj_creditcardclient;
    bool m_obj_creditcardclient_isSet;
    bool m_obj_creditcardclient_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Creditcardclient_getObject_v2_Response_mPayload)

#endif // Creditcardclient_getObject_v2_Response_mPayload_H
