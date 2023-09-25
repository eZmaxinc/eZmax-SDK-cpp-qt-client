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
 * OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocument}/getEzsignannotations
 */

#ifndef OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload_H
#define OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsignannotation_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIEzsignannotation_ResponseCompound;

class OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload();
    OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload(QString json);
    ~OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsignannotation_ResponseCompound> getAObjEzsignannotation() const;
    void setAObjEzsignannotation(const QList<OAIEzsignannotation_ResponseCompound> &a_obj_ezsignannotation);
    bool is_a_obj_ezsignannotation_Set() const;
    bool is_a_obj_ezsignannotation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsignannotation_ResponseCompound> m_a_obj_ezsignannotation;
    bool m_a_obj_ezsignannotation_isSet;
    bool m_a_obj_ezsignannotation_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload)

#endif // OAIEzsigndocument_getEzsignannotations_v1_Response_mPayload_H
