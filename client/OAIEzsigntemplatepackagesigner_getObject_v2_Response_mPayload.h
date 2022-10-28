/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.13
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatepackagesigner/{pkiEzsigntemplatepackagesignerID}
 */

#ifndef OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload_H
#define OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackagesigner_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagesigner_ResponseCompound;

class OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload();
    OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatepackagesigner_ResponseCompound getObjEzsigntemplatepackagesigner() const;
    void setObjEzsigntemplatepackagesigner(const OAIEzsigntemplatepackagesigner_ResponseCompound &obj_ezsigntemplatepackagesigner);
    bool is_obj_ezsigntemplatepackagesigner_Set() const;
    bool is_obj_ezsigntemplatepackagesigner_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatepackagesigner_ResponseCompound obj_ezsigntemplatepackagesigner;
    bool m_obj_ezsigntemplatepackagesigner_isSet;
    bool m_obj_ezsigntemplatepackagesigner_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload)

#endif // OAIEzsigntemplatepackagesigner_getObject_v2_Response_mPayload_H
