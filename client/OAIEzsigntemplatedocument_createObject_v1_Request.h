/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.8
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsigntemplatedocument_createObject_v1_Request.h
 *
 * Request for POST /1/object/ezsigntemplatedocument
 */

#ifndef OAIEzsigntemplatedocument_createObject_v1_Request_H
#define OAIEzsigntemplatedocument_createObject_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatedocument_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplatedocument_RequestCompound;

class OAIEzsigntemplatedocument_createObject_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatedocument_createObject_v1_Request();
    OAIEzsigntemplatedocument_createObject_v1_Request(QString json);
    ~OAIEzsigntemplatedocument_createObject_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatedocument_RequestCompound> getAObjEzsigntemplatedocument() const;
    void setAObjEzsigntemplatedocument(const QList<OAIEzsigntemplatedocument_RequestCompound> &a_obj_ezsigntemplatedocument);
    bool is_a_obj_ezsigntemplatedocument_Set() const;
    bool is_a_obj_ezsigntemplatedocument_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatedocument_RequestCompound> a_obj_ezsigntemplatedocument;
    bool m_a_obj_ezsigntemplatedocument_isSet;
    bool m_a_obj_ezsigntemplatedocument_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatedocument_createObject_v1_Request)

#endif // OAIEzsigntemplatedocument_createObject_v1_Request_H
