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
 * OAIEzsigntemplatedocument_patchObject_v1_Request.h
 *
 * Request for PATCH /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}
 */

#ifndef OAIEzsigntemplatedocument_patchObject_v1_Request_H
#define OAIEzsigntemplatedocument_patchObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatedocument_RequestPatch.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIEzsigntemplatedocument_RequestPatch;

class OAIEzsigntemplatedocument_patchObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatedocument_patchObject_v1_Request();
    OAIEzsigntemplatedocument_patchObject_v1_Request(QString json);
    ~OAIEzsigntemplatedocument_patchObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatedocument_RequestPatch getObjEzsigntemplatedocument() const;
    void setObjEzsigntemplatedocument(const OAIEzsigntemplatedocument_RequestPatch &obj_ezsigntemplatedocument);
    bool is_obj_ezsigntemplatedocument_Set() const;
    bool is_obj_ezsigntemplatedocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatedocument_RequestPatch m_obj_ezsigntemplatedocument;
    bool m_obj_ezsigntemplatedocument_isSet;
    bool m_obj_ezsigntemplatedocument_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsigntemplatedocument_patchObject_v1_Request)

#endif // OAIEzsigntemplatedocument_patchObject_v1_Request_H
