/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.1
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsigndocument_submitEzsignform_v1_Request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/submitEzsignform
 */

#ifndef Ezsigndocument_submitEzsignform_v1_Request_H
#define Ezsigndocument_submitEzsignform_v1_Request_H

#include <QJsonObject>

#include "Object.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigndocument_submitEzsignform_v1_Request : public Object {
public:
    Ezsigndocument_submitEzsignform_v1_Request();
    Ezsigndocument_submitEzsignform_v1_Request(QString json);
    ~Ezsigndocument_submitEzsignform_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    bool isBEzsignformIsdraft() const;
    void setBEzsignformIsdraft(const bool &b_ezsignform_isdraft);
    bool is_b_ezsignform_isdraft_Set() const;
    bool is_b_ezsignform_isdraft_Valid() const;

    QList<Custom_Ezsignformfieldgroup_Request> getAObjEzsignformfieldgroup() const;
    void setAObjEzsignformfieldgroup(const QList<Custom_Ezsignformfieldgroup_Request> &a_obj_ezsignformfieldgroup);
    bool is_a_obj_ezsignformfieldgroup_Set() const;
    bool is_a_obj_ezsignformfieldgroup_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    bool m_b_ezsignform_isdraft;
    bool m_b_ezsignform_isdraft_isSet;
    bool m_b_ezsignform_isdraft_isValid;

    QList<Custom_Ezsignformfieldgroup_Request> m_a_obj_ezsignformfieldgroup;
    bool m_a_obj_ezsignformfieldgroup_isSet;
    bool m_a_obj_ezsignformfieldgroup_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_submitEzsignform_v1_Request)

#endif // Ezsigndocument_submitEzsignform_v1_Request_H
