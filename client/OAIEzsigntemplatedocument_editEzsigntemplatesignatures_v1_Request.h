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
 * OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request.h
 *
 * Request for PUT /1/object/ezsigntemplatedocument/{pkiEzsigntemplatedocumentID}/editEzsigntemplatesignatures
 */

#ifndef OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request_H
#define OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request_H

#include <QJsonObject>

#include "OAIEzsigntemplatesignature_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace Ezmaxapi {
class OAIEzsigntemplatesignature_RequestCompound;

class OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request : public OAIObject {
public:
    OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request();
    OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request(QString json);
    ~OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplatesignature_RequestCompound> getAObjEzsigntemplatesignature() const;
    void setAObjEzsigntemplatesignature(const QList<OAIEzsigntemplatesignature_RequestCompound> &a_obj_ezsigntemplatesignature);
    bool is_a_obj_ezsigntemplatesignature_Set() const;
    bool is_a_obj_ezsigntemplatesignature_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplatesignature_RequestCompound> m_a_obj_ezsigntemplatesignature;
    bool m_a_obj_ezsigntemplatesignature_isSet;
    bool m_a_obj_ezsigntemplatesignature_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request)

#endif // OAIEzsigntemplatedocument_editEzsigntemplatesignatures_v1_Request_H
