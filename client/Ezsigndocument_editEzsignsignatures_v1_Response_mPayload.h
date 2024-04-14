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
 * Ezsigndocument_editEzsignsignatures_v1_Response_mPayload.h
 *
 * Payload for PUT /1/object/ezsigndocument/{pkiEzsigndocumentID}/editEzsignsignatures
 */

#ifndef Ezsigndocument_editEzsignsignatures_v1_Response_mPayload_H
#define Ezsigndocument_editEzsignsignatures_v1_Response_mPayload_H

#include <QJsonObject>

#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigndocument_editEzsignsignatures_v1_Response_mPayload : public Object {
public:
    Ezsigndocument_editEzsignsignatures_v1_Response_mPayload();
    Ezsigndocument_editEzsignsignatures_v1_Response_mPayload(QString json);
    ~Ezsigndocument_editEzsignsignatures_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<qint32> getAPkiEzsignsignatureId() const;
    void setAPkiEzsignsignatureId(const QList<qint32> &a_pki_ezsignsignature_id);
    bool is_a_pki_ezsignsignature_id_Set() const;
    bool is_a_pki_ezsignsignature_id_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<qint32> m_a_pki_ezsignsignature_id;
    bool m_a_pki_ezsignsignature_id_isSet;
    bool m_a_pki_ezsignsignature_id_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_editEzsignsignatures_v1_Response_mPayload)

#endif // Ezsigndocument_editEzsignsignatures_v1_Response_mPayload_H
