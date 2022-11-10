/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.16
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatesigner_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatesigner/{pkiEzsigntemplatesignerID}
 */

#ifndef OAIEzsigntemplatesigner_getObject_v2_Response_mPayload_H
#define OAIEzsigntemplatesigner_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatesigner_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatesigner_ResponseCompound;

class OAIEzsigntemplatesigner_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatesigner_getObject_v2_Response_mPayload();
    OAIEzsigntemplatesigner_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsigntemplatesigner_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatesigner_ResponseCompound getObjEzsigntemplatesigner() const;
    void setObjEzsigntemplatesigner(const OAIEzsigntemplatesigner_ResponseCompound &obj_ezsigntemplatesigner);
    bool is_obj_ezsigntemplatesigner_Set() const;
    bool is_obj_ezsigntemplatesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatesigner_ResponseCompound obj_ezsigntemplatesigner;
    bool m_obj_ezsigntemplatesigner_isSet;
    bool m_obj_ezsigntemplatesigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesigner_getObject_v2_Response_mPayload)

#endif // OAIEzsigntemplatesigner_getObject_v2_Response_mPayload_H
