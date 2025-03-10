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
 * Ezsigndocument_getEzsignannotations_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigndocument/{pkiEzsigndocument}/getEzsignannotations
 */

#ifndef Ezsigndocument_getEzsignannotations_v1_Response_mPayload_H
#define Ezsigndocument_getEzsignannotations_v1_Response_mPayload_H

#include <QJsonObject>

#include "Ezsignannotation_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsignannotation_ResponseCompound;

class Ezsigndocument_getEzsignannotations_v1_Response_mPayload : public Object {
public:
    Ezsigndocument_getEzsignannotations_v1_Response_mPayload();
    Ezsigndocument_getEzsignannotations_v1_Response_mPayload(QString json);
    ~Ezsigndocument_getEzsignannotations_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsignannotation_ResponseCompound> getAObjEzsignannotation() const;
    void setAObjEzsignannotation(const QList<Ezsignannotation_ResponseCompound> &a_obj_ezsignannotation);
    bool is_a_obj_ezsignannotation_Set() const;
    bool is_a_obj_ezsignannotation_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsignannotation_ResponseCompound> m_a_obj_ezsignannotation;
    bool m_a_obj_ezsignannotation_isSet;
    bool m_a_obj_ezsignannotation_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_getEzsignannotations_v1_Response_mPayload)

#endif // Ezsigndocument_getEzsignannotations_v1_Response_mPayload_H
