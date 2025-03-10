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
 * Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocument}/getEzsigntemplatedocumentpagerecognitions
 */

#ifndef Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload_H
#define Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload_H

#include <QJsonObject>

#include "Ezsigntemplatedocumentpagerecognition_ResponseCompound.h"
#include <QList>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatedocumentpagerecognition_ResponseCompound;

class Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload : public Object {
public:
    Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload();
    Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload(QString json);
    ~Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<Ezsigntemplatedocumentpagerecognition_ResponseCompound> getAObjEzsigntemplatedocumentpagerecognition() const;
    void setAObjEzsigntemplatedocumentpagerecognition(const QList<Ezsigntemplatedocumentpagerecognition_ResponseCompound> &a_obj_ezsigntemplatedocumentpagerecognition);
    bool is_a_obj_ezsigntemplatedocumentpagerecognition_Set() const;
    bool is_a_obj_ezsigntemplatedocumentpagerecognition_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<Ezsigntemplatedocumentpagerecognition_ResponseCompound> m_a_obj_ezsigntemplatedocumentpagerecognition;
    bool m_a_obj_ezsigntemplatedocumentpagerecognition_isSet;
    bool m_a_obj_ezsigntemplatedocumentpagerecognition_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload)

#endif // Ezsigntemplatedocument_getEzsigntemplatedocumentpagerecognitions_v1_Response_mPayload_H
