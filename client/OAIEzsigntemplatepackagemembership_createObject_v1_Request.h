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
 * OAIEzsigntemplatepackagemembership_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatepackagemembership
 */

#ifndef OAIEzsigntemplatepackagemembership_createObject_v1_Request_H
#define OAIEzsigntemplatepackagemembership_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatepackagemembership_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatepackagemembership_RequestCompound;

class OAIEzsigntemplatepackagemembership_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatepackagemembership_createObject_v1_Request();
    OAIEzsigntemplatepackagemembership_createObject_v1_Request(QString json);
    ~OAIEzsigntemplatepackagemembership_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatepackagemembership_RequestCompound> getAObjEzsigntemplatepackagemembership() const;
    void setAObjEzsigntemplatepackagemembership(const QList<OAIEzsigntemplatepackagemembership_RequestCompound> &a_obj_ezsigntemplatepackagemembership);
    bool is_a_obj_ezsigntemplatepackagemembership_Set() const;
    bool is_a_obj_ezsigntemplatepackagemembership_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatepackagemembership_RequestCompound> a_obj_ezsigntemplatepackagemembership;
    bool m_a_obj_ezsigntemplatepackagemembership_isSet;
    bool m_a_obj_ezsigntemplatepackagemembership_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatepackagemembership_createObject_v1_Request)

#endif // OAIEzsigntemplatepackagemembership_createObject_v1_Request_H
