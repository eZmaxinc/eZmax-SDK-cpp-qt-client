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
 * Creditcardclient_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/creditcardclient
 */

#ifndef Creditcardclient_createObject_v1_Response_mPayload_H
#define Creditcardclient_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Creditcardclient_createObject_v1_Response_mPayload : public Object {
public:
    Creditcardclient_createObject_v1_Response_mPayload();
    Creditcardclient_createObject_v1_Response_mPayload(QString json);
    ~Creditcardclient_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiCreditcardclientId() const;
    void setAPkiCreditcardclientId(const QList<qint32> &a_pki_creditcardclient_id);
    bool is_a_pki_creditcardclient_id_Set() const;
    bool is_a_pki_creditcardclient_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_creditcardclient_id;
    bool m_a_pki_creditcardclient_id_isSet;
    bool m_a_pki_creditcardclient_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Creditcardclient_createObject_v1_Response_mPayload)

#endif // Creditcardclient_createObject_v1_Response_mPayload_H