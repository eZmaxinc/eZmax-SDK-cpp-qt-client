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
 * OAIEzsigntemplatepackage_getObject_v2_Response_mPayload.h
 *
 * Payload for GET /2/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef OAIEzsigntemplatepackage_getObject_v2_Response_mPayload_H
#define OAIEzsigntemplatepackage_getObject_v2_Response_mPayload_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackage_ResponseCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackage_ResponseCompound;

class OAIEzsigntemplatepackage_getObject_v2_Response_mPayload : public OAIObject {
public:
    OAIEzsigntemplatepackage_getObject_v2_Response_mPayload();
    OAIEzsigntemplatepackage_getObject_v2_Response_mPayload(QString json);
    ~OAIEzsigntemplatepackage_getObject_v2_Response_mPayload() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatepackage_ResponseCompound getObjEzsigntemplatepackage() const;
    void setObjEzsigntemplatepackage(const OAIEzsigntemplatepackage_ResponseCompound &obj_ezsigntemplatepackage);
    bool is_obj_ezsigntemplatepackage_Set() const;
    bool is_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatepackage_ResponseCompound obj_ezsigntemplatepackage;
    bool m_obj_ezsigntemplatepackage_isSet;
    bool m_obj_ezsigntemplatepackage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackage_getObject_v2_Response_mPayload)

#endif // OAIEzsigntemplatepackage_getObject_v2_Response_mPayload_H
