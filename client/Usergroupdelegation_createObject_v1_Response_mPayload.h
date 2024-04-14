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
 * Usergroupdelegation_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/usergroupdelegation
 */

#ifndef Usergroupdelegation_createObject_v1_Response_mPayload_H
#define Usergroupdelegation_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Usergroupdelegation_createObject_v1_Response_mPayload : public Object {
public:
    Usergroupdelegation_createObject_v1_Response_mPayload();
    Usergroupdelegation_createObject_v1_Response_mPayload(QString json);
    ~Usergroupdelegation_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiUsergroupdelegationId() const;
    void setAPkiUsergroupdelegationId(const QList<qint32> &a_pki_usergroupdelegation_id);
    bool is_a_pki_usergroupdelegation_id_Set() const;
    bool is_a_pki_usergroupdelegation_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_usergroupdelegation_id;
    bool m_a_pki_usergroupdelegation_id_isSet;
    bool m_a_pki_usergroupdelegation_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Usergroupdelegation_createObject_v1_Response_mPayload)

#endif // Usergroupdelegation_createObject_v1_Response_mPayload_H
