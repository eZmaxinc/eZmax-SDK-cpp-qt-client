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
 * Ezsignbulksend_createObject_v1_Response_mPayload.h
 *
 * Payload for POST /1/object/ezsignbulksend
 */

#ifndef Ezsignbulksend_createObject_v1_Response_mPayload_H
#define Ezsignbulksend_createObject_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignbulksend_createObject_v1_Response_mPayload : public Object {
public:
    Ezsignbulksend_createObject_v1_Response_mPayload();
    Ezsignbulksend_createObject_v1_Response_mPayload(QString json);
    ~Ezsignbulksend_createObject_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignbulksendId() const;
    void setAPkiEzsignbulksendId(const QList<qint32> &a_pki_ezsignbulksend_id);
    bool is_a_pki_ezsignbulksend_id_Set() const;
    bool is_a_pki_ezsignbulksend_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_ezsignbulksend_id;
    bool m_a_pki_ezsignbulksend_id_isSet;
    bool m_a_pki_ezsignbulksend_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignbulksend_createObject_v1_Response_mPayload)

#endif // Ezsignbulksend_createObject_v1_Response_mPayload_H
