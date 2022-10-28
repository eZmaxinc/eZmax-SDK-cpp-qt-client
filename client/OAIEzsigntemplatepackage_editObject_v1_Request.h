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
 * OAIEzsigntemplatepackage_editObject_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatepackage/{pkiEzsigntemplatepackageID}
 */

#ifndef OAIEzsigntemplatepackage_editObject_v1_Request_H
#define OAIEzsigntemplatepackage_editObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackage_RequestCompound.h"

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackage_RequestCompound;

class OAIEzsigntemplatepackage_editObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatepackage_editObject_v1_Request();
    OAIEzsigntemplatepackage_editObject_v1_Request(QString json);
    ~OAIEzsigntemplatepackage_editObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    OAIEzsigntemplatepackage_RequestCompound getObjEzsigntemplatepackage() const;
    void setObjEzsigntemplatepackage(const OAIEzsigntemplatepackage_RequestCompound &obj_ezsigntemplatepackage);
    bool is_obj_ezsigntemplatepackage_Set() const;
    bool is_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    OAIEzsigntemplatepackage_RequestCompound obj_ezsigntemplatepackage;
    bool m_obj_ezsigntemplatepackage_isSet;
    bool m_obj_ezsigntemplatepackage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackage_editObject_v1_Request)

#endif // OAIEzsigntemplatepackage_editObject_v1_Request_H
