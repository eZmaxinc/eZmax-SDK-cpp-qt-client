/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.2.2
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * Ezsignelementdependency_Response.h
 *
 * An Ezsignelementdependency Object
 */

#ifndef Ezsignelementdependency_Response_H
#define Ezsignelementdependency_Response_H

#include <QJsonObject>

#include "Field_eEzsignelementdependencyOperator.h"
#include "Field_eEzsignelementdependencyValidation.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsignelementdependency_Response : public Object {
public:
    Ezsignelementdependency_Response();
    Ezsignelementdependency_Response(QString json);
    ~Ezsignelementdependency_Response() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignelementdependencyId() const;
    void setPkiEzsignelementdependencyId(const qint32 &pki_ezsignelementdependency_id);
    bool is_pki_ezsignelementdependency_id_Set() const;
    bool is_pki_ezsignelementdependency_id_Valid() const;

    qint32 getFkiEzsignformfieldId() const;
    void setFkiEzsignformfieldId(const qint32 &fki_ezsignformfield_id);
    bool is_fki_ezsignformfield_id_Set() const;
    bool is_fki_ezsignformfield_id_Valid() const;

    qint32 getFkiEzsignsignatureId() const;
    void setFkiEzsignsignatureId(const qint32 &fki_ezsignsignature_id);
    bool is_fki_ezsignsignature_id_Set() const;
    bool is_fki_ezsignsignature_id_Valid() const;

    qint32 getFkiEzsignformfieldIdValidation() const;
    void setFkiEzsignformfieldIdValidation(const qint32 &fki_ezsignformfield_id_validation);
    bool is_fki_ezsignformfield_id_validation_Set() const;
    bool is_fki_ezsignformfield_id_validation_Valid() const;

    qint32 getFkiEzsignformfieldgroupIdValidation() const;
    void setFkiEzsignformfieldgroupIdValidation(const qint32 &fki_ezsignformfieldgroup_id_validation);
    bool is_fki_ezsignformfieldgroup_id_validation_Set() const;
    bool is_fki_ezsignformfieldgroup_id_validation_Valid() const;

    Field_eEzsignelementdependencyValidation getEEzsignelementdependencyValidation() const;
    void setEEzsignelementdependencyValidation(const Field_eEzsignelementdependencyValidation &e_ezsignelementdependency_validation);
    bool is_e_ezsignelementdependency_validation_Set() const;
    bool is_e_ezsignelementdependency_validation_Valid() const;

    bool isBEzsignelementdependencySelected() const;
    void setBEzsignelementdependencySelected(const bool &b_ezsignelementdependency_selected);
    bool is_b_ezsignelementdependency_selected_Set() const;
    bool is_b_ezsignelementdependency_selected_Valid() const;

    Field_eEzsignelementdependencyOperator getEEzsignelementdependencyOperator() const;
    void setEEzsignelementdependencyOperator(const Field_eEzsignelementdependencyOperator &e_ezsignelementdependency_operator);
    bool is_e_ezsignelementdependency_operator_Set() const;
    bool is_e_ezsignelementdependency_operator_Valid() const;

    QString getSEzsignelementdependencyValue() const;
    void setSEzsignelementdependencyValue(const QString &s_ezsignelementdependency_value);
    bool is_s_ezsignelementdependency_value_Set() const;
    bool is_s_ezsignelementdependency_value_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsignelementdependency_id;
    bool m_pki_ezsignelementdependency_id_isSet;
    bool m_pki_ezsignelementdependency_id_isValid;

    qint32 m_fki_ezsignformfield_id;
    bool m_fki_ezsignformfield_id_isSet;
    bool m_fki_ezsignformfield_id_isValid;

    qint32 m_fki_ezsignsignature_id;
    bool m_fki_ezsignsignature_id_isSet;
    bool m_fki_ezsignsignature_id_isValid;

    qint32 m_fki_ezsignformfield_id_validation;
    bool m_fki_ezsignformfield_id_validation_isSet;
    bool m_fki_ezsignformfield_id_validation_isValid;

    qint32 m_fki_ezsignformfieldgroup_id_validation;
    bool m_fki_ezsignformfieldgroup_id_validation_isSet;
    bool m_fki_ezsignformfieldgroup_id_validation_isValid;

    Field_eEzsignelementdependencyValidation m_e_ezsignelementdependency_validation;
    bool m_e_ezsignelementdependency_validation_isSet;
    bool m_e_ezsignelementdependency_validation_isValid;

    bool m_b_ezsignelementdependency_selected;
    bool m_b_ezsignelementdependency_selected_isSet;
    bool m_b_ezsignelementdependency_selected_isValid;

    Field_eEzsignelementdependencyOperator m_e_ezsignelementdependency_operator;
    bool m_e_ezsignelementdependency_operator_isSet;
    bool m_e_ezsignelementdependency_operator_isValid;

    QString m_s_ezsignelementdependency_value;
    bool m_s_ezsignelementdependency_value_isSet;
    bool m_s_ezsignelementdependency_value_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsignelementdependency_Response)

#endif // Ezsignelementdependency_Response_H
