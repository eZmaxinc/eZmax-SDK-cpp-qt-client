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
 * OAIEzsigntemplateformfieldgroup_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplateformfieldgroup
 */

#ifndef OAIEzsigntemplateformfieldgroup_createObject_v1_Request_H
#define OAIEzsigntemplateformfieldgroup_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplateformfieldgroup_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplateformfieldgroup_RequestCompound;

class OAIEzsigntemplateformfieldgroup_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplateformfieldgroup_createObject_v1_Request();
    OAIEzsigntemplateformfieldgroup_createObject_v1_Request(QString json);
    ~OAIEzsigntemplateformfieldgroup_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplateformfieldgroup_RequestCompound> getAObjEzsigntemplateformfieldgroup() const;
    void setAObjEzsigntemplateformfieldgroup(const QList<OAIEzsigntemplateformfieldgroup_RequestCompound> &a_obj_ezsigntemplateformfieldgroup);
    bool is_a_obj_ezsigntemplateformfieldgroup_Set() const;
    bool is_a_obj_ezsigntemplateformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplateformfieldgroup_RequestCompound> a_obj_ezsigntemplateformfieldgroup;
    bool m_a_obj_ezsigntemplateformfieldgroup_isSet;
    bool m_a_obj_ezsigntemplateformfieldgroup_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplateformfieldgroup_createObject_v1_Request)

#endif // OAIEzsigntemplateformfieldgroup_createObject_v1_Request_H
