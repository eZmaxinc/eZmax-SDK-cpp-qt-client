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
 * OAIEzsigntemplateformfieldgroup_RequestCompound_allOf.h
 *
 * 
 */

#ifndef OAIEzsigntemplateformfieldgroup_RequestCompound_allOf_H
#define OAIEzsigntemplateformfieldgroup_RequestCompound_allOf_H

#include <QJsonObject>

#include "OAICustom_DropdownElement_RequestCompound.h"
#include "OAIEzsigntemplateformfield_RequestCompound.h"
#include "OAIEzsigntemplateformfieldgroupsigner_RequestCompound.h"
#include <QList>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {
class OAIEzsigntemplateformfieldgroupsigner_RequestCompound;
class OAICustom_DropdownElement_RequestCompound;
class OAIEzsigntemplateformfield_RequestCompound;

class OAIEzsigntemplateformfieldgroup_RequestCompound_allOf : public OAIObject {
public:
    OAIEzsigntemplateformfieldgroup_RequestCompound_allOf();
    OAIEzsigntemplateformfieldgroup_RequestCompound_allOf(QString json);
    ~OAIEzsigntemplateformfieldgroup_RequestCompound_allOf() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QList<OAIEzsigntemplateformfieldgroupsigner_RequestCompound> getAObjEzsigntemplateformfieldgroupsigner() const;
    void setAObjEzsigntemplateformfieldgroupsigner(const QList<OAIEzsigntemplateformfieldgroupsigner_RequestCompound> &a_obj_ezsigntemplateformfieldgroupsigner);
    bool is_a_obj_ezsigntemplateformfieldgroupsigner_Set() const;
    bool is_a_obj_ezsigntemplateformfieldgroupsigner_Valid() const;

    QList<OAICustom_DropdownElement_RequestCompound> getAObjDropdownElement() const;
    void setAObjDropdownElement(const QList<OAICustom_DropdownElement_RequestCompound> &a_obj_dropdown_element);
    bool is_a_obj_dropdown_element_Set() const;
    bool is_a_obj_dropdown_element_Valid() const;

    QList<OAIEzsigntemplateformfield_RequestCompound> getAObjEzsigntemplateformfield() const;
    void setAObjEzsigntemplateformfield(const QList<OAIEzsigntemplateformfield_RequestCompound> &a_obj_ezsigntemplateformfield);
    bool is_a_obj_ezsigntemplateformfield_Set() const;
    bool is_a_obj_ezsigntemplateformfield_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QList<OAIEzsigntemplateformfieldgroupsigner_RequestCompound> a_obj_ezsigntemplateformfieldgroupsigner;
    bool m_a_obj_ezsigntemplateformfieldgroupsigner_isSet;
    bool m_a_obj_ezsigntemplateformfieldgroupsigner_isValid;

    QList<OAICustom_DropdownElement_RequestCompound> a_obj_dropdown_element;
    bool m_a_obj_dropdown_element_isSet;
    bool m_a_obj_dropdown_element_isValid;

    QList<OAIEzsigntemplateformfield_RequestCompound> a_obj_ezsigntemplateformfield;
    bool m_a_obj_ezsigntemplateformfield_isSet;
    bool m_a_obj_ezsigntemplateformfield_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplateformfieldgroup_RequestCompound_allOf)

#endif // OAIEzsigntemplateformfieldgroup_RequestCompound_allOf_H
