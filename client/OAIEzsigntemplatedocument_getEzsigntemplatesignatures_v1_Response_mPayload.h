/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload.h
 *
 * Payload for GET /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocument}/getEzsigntemplatesignatures
 */

#ifndef OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload_H
#define OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatesignature_ResponseCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatesignature_ResponseCompound;

class OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload();
    OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload(QString json);
    ~OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatesignature_ResponseCompound> getAObjEzsigntemplatesignature() const;
    void setAObjEzsigntemplatesignature(const QList<OAIEzsigntemplatesignature_ResponseCompound> &a_obj_ezsigntemplatesignature);
    bool is_a_obj_ezsigntemplatesignature_Set() const;
    bool is_a_obj_ezsigntemplatesignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatesignature_ResponseCompound> a_obj_ezsigntemplatesignature;
    bool m_a_obj_ezsigntemplatesignature_isSet;
    bool m_a_obj_ezsigntemplatesignature_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload)

#endif // OAIEzsigntemplatedocument_getEzsigntemplatesignatures_v1_Response_mPayload_H
