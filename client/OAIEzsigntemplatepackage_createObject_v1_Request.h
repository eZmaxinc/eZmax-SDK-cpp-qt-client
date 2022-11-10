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
 * OAIEzsigntemplatepackage_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatepackage
 */

#ifndef OAIEzsigntemplatepackage_createObject_v1_Request_H
#define OAIEzsigntemplatepackage_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackage_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackage_RequestCompound;

class OAIEzsigntemplatepackage_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatepackage_createObject_v1_Request();
    OAIEzsigntemplatepackage_createObject_v1_Request(QString json);
    ~OAIEzsigntemplatepackage_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatepackage_RequestCompound> getAObjEzsigntemplatepackage() const;
    void setAObjEzsigntemplatepackage(const QList<OAIEzsigntemplatepackage_RequestCompound> &a_obj_ezsigntemplatepackage);
    bool is_a_obj_ezsigntemplatepackage_Set() const;
    bool is_a_obj_ezsigntemplatepackage_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatepackage_RequestCompound> a_obj_ezsigntemplatepackage;
    bool m_a_obj_ezsigntemplatepackage_isSet;
    bool m_a_obj_ezsigntemplatepackage_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackage_createObject_v1_Request)

#endif // OAIEzsigntemplatepackage_createObject_v1_Request_H
