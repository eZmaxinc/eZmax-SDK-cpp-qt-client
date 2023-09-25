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
 * Ezsigndocument_getTemporaryProof_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocumentID}/getTemporaryProof
 */

#ifndef Ezsigndocument_getTemporaryProof_v1_Response_mPayload_H
#define Ezsigndocument_getTemporaryProof_v1_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigndocumentlog_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigndocumentlog_ResponseCompound;

class Ezsigndocument_getTemporaryProof_v1_Response_mPayload : public Object {
public:
    Ezsigndocument_getTemporaryProof_v1_Response_mPayload();
    Ezsigndocument_getTemporaryProof_v1_Response_mPayload(QString json);
    ~Ezsigndocument_getTemporaryProof_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigndocumentlog_ResponseCompound> getAObjEzsigndocumentlog() const;
    void setAObjEzsigndocumentlog(const QList<Ezsigndocumentlog_ResponseCompound> &a_obj_ezsigndocumentlog);
    bool is_a_obj_ezsigndocumentlog_Set() const;
    bool is_a_obj_ezsigndocumentlog_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigndocumentlog_ResponseCompound> m_a_obj_ezsigndocumentlog;
    bool m_a_obj_ezsigndocumentlog_isSet;
    bool m_a_obj_ezsigndocumentlog_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_getTemporaryProof_v1_Response_mPayload)

#endif // Ezsigndocument_getTemporaryProof_v1_Response_mPayload_H
