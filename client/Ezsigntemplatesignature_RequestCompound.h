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
 * Ezsigntemplatesignature_RequestCompound.h
 *
 * A Ezsigntemplatesignature Object and children
 */

#ifndef Ezsigntemplatesignature_RequestCompound_H
#define Ezsigntemplatesignature_RequestCompound_H

#include <QJsonObject>

#include "Enum_Textvalidation.h"
#include "Ezsigntemplateelementdependency_Request.h"
#include "Ezsigntemplatesignature_Request.h"
#include "Ezsigntemplatesignaturecustomdate_Request.h"
#include "Field_eEzsigntemplatesignatureAttachmentnamesource.h"
#include "Field_eEzsigntemplatesignatureConsultationtrigger.h"
#include "Field_eEzsigntemplatesignatureDependencyrequirement.h"
#include "Field_eEzsigntemplatesignatureFont.h"
#include "Field_eEzsigntemplatesignaturePositioning.h"
#include "Field_eEzsigntemplatesignaturePositioningoccurence.h"
#include "Field_eEzsigntemplatesignatureTooltipposition.h"
#include "Field_eEzsigntemplatesignatureType.h"
#include <QList>
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {
class Ezsigntemplatesignaturecustomdate_Request;
class Ezsigntemplateelementdependency_Request;

class Ezsigntemplatesignature_RequestCompound : public Object {
public:
    Ezsigntemplatesignature_RequestCompound();
    Ezsigntemplatesignature_RequestCompound(QString json);
    ~Ezsigntemplatesignature_RequestCompound() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsigntemplatesignatureId() const;
    void setPkiEzsigntemplatesignatureId(const qint32 &pki_ezsigntemplatesignature_id);
    bool is_pki_ezsigntemplatesignature_id_Set() const;
    bool is_pki_ezsigntemplatesignature_id_Valid() const;

    qint32 getFkiEzsigntemplatedocumentId() const;
    void setFkiEzsigntemplatedocumentId(const qint32 &fki_ezsigntemplatedocument_id);
    bool is_fki_ezsigntemplatedocument_id_Set() const;
    bool is_fki_ezsigntemplatedocument_id_Valid() const;

    qint32 getFkiEzsigntemplatesignerId() const;
    void setFkiEzsigntemplatesignerId(const qint32 &fki_ezsigntemplatesigner_id);
    bool is_fki_ezsigntemplatesigner_id_Set() const;
    bool is_fki_ezsigntemplatesigner_id_Valid() const;

    qint32 getFkiEzsigntemplatesignerIdValidation() const;
    void setFkiEzsigntemplatesignerIdValidation(const qint32 &fki_ezsigntemplatesigner_id_validation);
    bool is_fki_ezsigntemplatesigner_id_validation_Set() const;
    bool is_fki_ezsigntemplatesigner_id_validation_Valid() const;

    bool isBEzsigntemplatesignatureHandwritten() const;
    void setBEzsigntemplatesignatureHandwritten(const bool &b_ezsigntemplatesignature_handwritten);
    bool is_b_ezsigntemplatesignature_handwritten_Set() const;
    bool is_b_ezsigntemplatesignature_handwritten_Valid() const;

    bool isBEzsigntemplatesignatureReason() const;
    void setBEzsigntemplatesignatureReason(const bool &b_ezsigntemplatesignature_reason);
    bool is_b_ezsigntemplatesignature_reason_Set() const;
    bool is_b_ezsigntemplatesignature_reason_Valid() const;

    Field_eEzsigntemplatesignaturePositioning getEEzsigntemplatesignaturePositioning() const;
    void setEEzsigntemplatesignaturePositioning(const Field_eEzsigntemplatesignaturePositioning &e_ezsigntemplatesignature_positioning);
    bool is_e_ezsigntemplatesignature_positioning_Set() const;
    bool is_e_ezsigntemplatesignature_positioning_Valid() const;

    qint32 getIEzsigntemplatedocumentpagePagenumber() const;
    void setIEzsigntemplatedocumentpagePagenumber(const qint32 &i_ezsigntemplatedocumentpage_pagenumber);
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Set() const;
    bool is_i_ezsigntemplatedocumentpage_pagenumber_Valid() const;

    qint32 getIEzsigntemplatesignatureX() const;
    void setIEzsigntemplatesignatureX(const qint32 &i_ezsigntemplatesignature_x);
    bool is_i_ezsigntemplatesignature_x_Set() const;
    bool is_i_ezsigntemplatesignature_x_Valid() const;

    qint32 getIEzsigntemplatesignatureY() const;
    void setIEzsigntemplatesignatureY(const qint32 &i_ezsigntemplatesignature_y);
    bool is_i_ezsigntemplatesignature_y_Set() const;
    bool is_i_ezsigntemplatesignature_y_Valid() const;

    qint32 getIEzsigntemplatesignatureWidth() const;
    void setIEzsigntemplatesignatureWidth(const qint32 &i_ezsigntemplatesignature_width);
    bool is_i_ezsigntemplatesignature_width_Set() const;
    bool is_i_ezsigntemplatesignature_width_Valid() const;

    qint32 getIEzsigntemplatesignatureHeight() const;
    void setIEzsigntemplatesignatureHeight(const qint32 &i_ezsigntemplatesignature_height);
    bool is_i_ezsigntemplatesignature_height_Set() const;
    bool is_i_ezsigntemplatesignature_height_Valid() const;

    qint32 getIEzsigntemplatesignatureStep() const;
    void setIEzsigntemplatesignatureStep(const qint32 &i_ezsigntemplatesignature_step);
    bool is_i_ezsigntemplatesignature_step_Set() const;
    bool is_i_ezsigntemplatesignature_step_Valid() const;

    Field_eEzsigntemplatesignatureType getEEzsigntemplatesignatureType() const;
    void setEEzsigntemplatesignatureType(const Field_eEzsigntemplatesignatureType &e_ezsigntemplatesignature_type);
    bool is_e_ezsigntemplatesignature_type_Set() const;
    bool is_e_ezsigntemplatesignature_type_Valid() const;

    Field_eEzsigntemplatesignatureConsultationtrigger getEEzsigntemplatesignatureConsultationtrigger() const;
    void setEEzsigntemplatesignatureConsultationtrigger(const Field_eEzsigntemplatesignatureConsultationtrigger &e_ezsigntemplatesignature_consultationtrigger);
    bool is_e_ezsigntemplatesignature_consultationtrigger_Set() const;
    bool is_e_ezsigntemplatesignature_consultationtrigger_Valid() const;

    QString getTEzsigntemplatesignatureTooltip() const;
    void setTEzsigntemplatesignatureTooltip(const QString &t_ezsigntemplatesignature_tooltip);
    bool is_t_ezsigntemplatesignature_tooltip_Set() const;
    bool is_t_ezsigntemplatesignature_tooltip_Valid() const;

    Field_eEzsigntemplatesignatureTooltipposition getEEzsigntemplatesignatureTooltipposition() const;
    void setEEzsigntemplatesignatureTooltipposition(const Field_eEzsigntemplatesignatureTooltipposition &e_ezsigntemplatesignature_tooltipposition);
    bool is_e_ezsigntemplatesignature_tooltipposition_Set() const;
    bool is_e_ezsigntemplatesignature_tooltipposition_Valid() const;

    Field_eEzsigntemplatesignatureFont getEEzsigntemplatesignatureFont() const;
    void setEEzsigntemplatesignatureFont(const Field_eEzsigntemplatesignatureFont &e_ezsigntemplatesignature_font);
    bool is_e_ezsigntemplatesignature_font_Set() const;
    bool is_e_ezsigntemplatesignature_font_Valid() const;

    bool isBEzsigntemplatesignatureRequired() const;
    void setBEzsigntemplatesignatureRequired(const bool &b_ezsigntemplatesignature_required);
    bool is_b_ezsigntemplatesignature_required_Set() const;
    bool is_b_ezsigntemplatesignature_required_Valid() const;

    Field_eEzsigntemplatesignatureAttachmentnamesource getEEzsigntemplatesignatureAttachmentnamesource() const;
    void setEEzsigntemplatesignatureAttachmentnamesource(const Field_eEzsigntemplatesignatureAttachmentnamesource &e_ezsigntemplatesignature_attachmentnamesource);
    bool is_e_ezsigntemplatesignature_attachmentnamesource_Set() const;
    bool is_e_ezsigntemplatesignature_attachmentnamesource_Valid() const;

    QString getSEzsigntemplatesignatureAttachmentdescription() const;
    void setSEzsigntemplatesignatureAttachmentdescription(const QString &s_ezsigntemplatesignature_attachmentdescription);
    bool is_s_ezsigntemplatesignature_attachmentdescription_Set() const;
    bool is_s_ezsigntemplatesignature_attachmentdescription_Valid() const;

    qint32 getIEzsigntemplatesignatureValidationstep() const;
    void setIEzsigntemplatesignatureValidationstep(const qint32 &i_ezsigntemplatesignature_validationstep);
    bool is_i_ezsigntemplatesignature_validationstep_Set() const;
    bool is_i_ezsigntemplatesignature_validationstep_Valid() const;

    qint32 getIEzsigntemplatesignatureMaxlength() const;
    void setIEzsigntemplatesignatureMaxlength(const qint32 &i_ezsigntemplatesignature_maxlength);
    bool is_i_ezsigntemplatesignature_maxlength_Set() const;
    bool is_i_ezsigntemplatesignature_maxlength_Valid() const;

    QString getSEzsigntemplatesignatureDefaultvalue() const;
    void setSEzsigntemplatesignatureDefaultvalue(const QString &s_ezsigntemplatesignature_defaultvalue);
    bool is_s_ezsigntemplatesignature_defaultvalue_Set() const;
    bool is_s_ezsigntemplatesignature_defaultvalue_Valid() const;

    QString getSEzsigntemplatesignatureRegexp() const;
    void setSEzsigntemplatesignatureRegexp(const QString &s_ezsigntemplatesignature_regexp);
    bool is_s_ezsigntemplatesignature_regexp_Set() const;
    bool is_s_ezsigntemplatesignature_regexp_Valid() const;

    Enum_Textvalidation getEEzsigntemplatesignatureTextvalidation() const;
    void setEEzsigntemplatesignatureTextvalidation(const Enum_Textvalidation &e_ezsigntemplatesignature_textvalidation);
    bool is_e_ezsigntemplatesignature_textvalidation_Set() const;
    bool is_e_ezsigntemplatesignature_textvalidation_Valid() const;

    QString getSEzsigntemplatesignatureTextvalidationcustommessage() const;
    void setSEzsigntemplatesignatureTextvalidationcustommessage(const QString &s_ezsigntemplatesignature_textvalidationcustommessage);
    bool is_s_ezsigntemplatesignature_textvalidationcustommessage_Set() const;
    bool is_s_ezsigntemplatesignature_textvalidationcustommessage_Valid() const;

    Field_eEzsigntemplatesignatureDependencyrequirement getEEzsigntemplatesignatureDependencyrequirement() const;
    void setEEzsigntemplatesignatureDependencyrequirement(const Field_eEzsigntemplatesignatureDependencyrequirement &e_ezsigntemplatesignature_dependencyrequirement);
    bool is_e_ezsigntemplatesignature_dependencyrequirement_Set() const;
    bool is_e_ezsigntemplatesignature_dependencyrequirement_Valid() const;

    QString getSEzsigntemplatesignaturePositioningpattern() const;
    void setSEzsigntemplatesignaturePositioningpattern(const QString &s_ezsigntemplatesignature_positioningpattern);
    bool is_s_ezsigntemplatesignature_positioningpattern_Set() const;
    bool is_s_ezsigntemplatesignature_positioningpattern_Valid() const;

    qint32 getIEzsigntemplatesignaturePositioningoffsetx() const;
    void setIEzsigntemplatesignaturePositioningoffsetx(const qint32 &i_ezsigntemplatesignature_positioningoffsetx);
    bool is_i_ezsigntemplatesignature_positioningoffsetx_Set() const;
    bool is_i_ezsigntemplatesignature_positioningoffsetx_Valid() const;

    qint32 getIEzsigntemplatesignaturePositioningoffsety() const;
    void setIEzsigntemplatesignaturePositioningoffsety(const qint32 &i_ezsigntemplatesignature_positioningoffsety);
    bool is_i_ezsigntemplatesignature_positioningoffsety_Set() const;
    bool is_i_ezsigntemplatesignature_positioningoffsety_Valid() const;

    Field_eEzsigntemplatesignaturePositioningoccurence getEEzsigntemplatesignaturePositioningoccurence() const;
    void setEEzsigntemplatesignaturePositioningoccurence(const Field_eEzsigntemplatesignaturePositioningoccurence &e_ezsigntemplatesignature_positioningoccurence);
    bool is_e_ezsigntemplatesignature_positioningoccurence_Set() const;
    bool is_e_ezsigntemplatesignature_positioningoccurence_Valid() const;

    bool isBEzsigntemplatesignatureCustomdate() const;
    void setBEzsigntemplatesignatureCustomdate(const bool &b_ezsigntemplatesignature_customdate);
    bool is_b_ezsigntemplatesignature_customdate_Set() const;
    bool is_b_ezsigntemplatesignature_customdate_Valid() const;

    QList<Ezsigntemplatesignaturecustomdate_RequestCompound> getAObjEzsigntemplatesignaturecustomdate() const;
    void setAObjEzsigntemplatesignaturecustomdate(const QList<Ezsigntemplatesignaturecustomdate_RequestCompound> &a_obj_ezsigntemplatesignaturecustomdate);
    bool is_a_obj_ezsigntemplatesignaturecustomdate_Set() const;
    bool is_a_obj_ezsigntemplatesignaturecustomdate_Valid() const;

    QList<Ezsigntemplateelementdependency_RequestCompound> getAObjEzsigntemplateelementdependency() const;
    void setAObjEzsigntemplateelementdependency(const QList<Ezsigntemplateelementdependency_RequestCompound> &a_obj_ezsigntemplateelementdependency);
    bool is_a_obj_ezsigntemplateelementdependency_Set() const;
    bool is_a_obj_ezsigntemplateelementdependency_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_pki_ezsigntemplatesignature_id;
    bool m_pki_ezsigntemplatesignature_id_isSet;
    bool m_pki_ezsigntemplatesignature_id_isValid;

    qint32 m_fki_ezsigntemplatedocument_id;
    bool m_fki_ezsigntemplatedocument_id_isSet;
    bool m_fki_ezsigntemplatedocument_id_isValid;

    qint32 m_fki_ezsigntemplatesigner_id;
    bool m_fki_ezsigntemplatesigner_id_isSet;
    bool m_fki_ezsigntemplatesigner_id_isValid;

    qint32 m_fki_ezsigntemplatesigner_id_validation;
    bool m_fki_ezsigntemplatesigner_id_validation_isSet;
    bool m_fki_ezsigntemplatesigner_id_validation_isValid;

    bool m_b_ezsigntemplatesignature_handwritten;
    bool m_b_ezsigntemplatesignature_handwritten_isSet;
    bool m_b_ezsigntemplatesignature_handwritten_isValid;

    bool m_b_ezsigntemplatesignature_reason;
    bool m_b_ezsigntemplatesignature_reason_isSet;
    bool m_b_ezsigntemplatesignature_reason_isValid;

    Field_eEzsigntemplatesignaturePositioning m_e_ezsigntemplatesignature_positioning;
    bool m_e_ezsigntemplatesignature_positioning_isSet;
    bool m_e_ezsigntemplatesignature_positioning_isValid;

    qint32 m_i_ezsigntemplatedocumentpage_pagenumber;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    qint32 m_i_ezsigntemplatesignature_x;
    bool m_i_ezsigntemplatesignature_x_isSet;
    bool m_i_ezsigntemplatesignature_x_isValid;

    qint32 m_i_ezsigntemplatesignature_y;
    bool m_i_ezsigntemplatesignature_y_isSet;
    bool m_i_ezsigntemplatesignature_y_isValid;

    qint32 m_i_ezsigntemplatesignature_width;
    bool m_i_ezsigntemplatesignature_width_isSet;
    bool m_i_ezsigntemplatesignature_width_isValid;

    qint32 m_i_ezsigntemplatesignature_height;
    bool m_i_ezsigntemplatesignature_height_isSet;
    bool m_i_ezsigntemplatesignature_height_isValid;

    qint32 m_i_ezsigntemplatesignature_step;
    bool m_i_ezsigntemplatesignature_step_isSet;
    bool m_i_ezsigntemplatesignature_step_isValid;

    Field_eEzsigntemplatesignatureType m_e_ezsigntemplatesignature_type;
    bool m_e_ezsigntemplatesignature_type_isSet;
    bool m_e_ezsigntemplatesignature_type_isValid;

    Field_eEzsigntemplatesignatureConsultationtrigger m_e_ezsigntemplatesignature_consultationtrigger;
    bool m_e_ezsigntemplatesignature_consultationtrigger_isSet;
    bool m_e_ezsigntemplatesignature_consultationtrigger_isValid;

    QString m_t_ezsigntemplatesignature_tooltip;
    bool m_t_ezsigntemplatesignature_tooltip_isSet;
    bool m_t_ezsigntemplatesignature_tooltip_isValid;

    Field_eEzsigntemplatesignatureTooltipposition m_e_ezsigntemplatesignature_tooltipposition;
    bool m_e_ezsigntemplatesignature_tooltipposition_isSet;
    bool m_e_ezsigntemplatesignature_tooltipposition_isValid;

    Field_eEzsigntemplatesignatureFont m_e_ezsigntemplatesignature_font;
    bool m_e_ezsigntemplatesignature_font_isSet;
    bool m_e_ezsigntemplatesignature_font_isValid;

    bool m_b_ezsigntemplatesignature_required;
    bool m_b_ezsigntemplatesignature_required_isSet;
    bool m_b_ezsigntemplatesignature_required_isValid;

    Field_eEzsigntemplatesignatureAttachmentnamesource m_e_ezsigntemplatesignature_attachmentnamesource;
    bool m_e_ezsigntemplatesignature_attachmentnamesource_isSet;
    bool m_e_ezsigntemplatesignature_attachmentnamesource_isValid;

    QString m_s_ezsigntemplatesignature_attachmentdescription;
    bool m_s_ezsigntemplatesignature_attachmentdescription_isSet;
    bool m_s_ezsigntemplatesignature_attachmentdescription_isValid;

    qint32 m_i_ezsigntemplatesignature_validationstep;
    bool m_i_ezsigntemplatesignature_validationstep_isSet;
    bool m_i_ezsigntemplatesignature_validationstep_isValid;

    qint32 m_i_ezsigntemplatesignature_maxlength;
    bool m_i_ezsigntemplatesignature_maxlength_isSet;
    bool m_i_ezsigntemplatesignature_maxlength_isValid;

    QString m_s_ezsigntemplatesignature_defaultvalue;
    bool m_s_ezsigntemplatesignature_defaultvalue_isSet;
    bool m_s_ezsigntemplatesignature_defaultvalue_isValid;

    QString m_s_ezsigntemplatesignature_regexp;
    bool m_s_ezsigntemplatesignature_regexp_isSet;
    bool m_s_ezsigntemplatesignature_regexp_isValid;

    Enum_Textvalidation m_e_ezsigntemplatesignature_textvalidation;
    bool m_e_ezsigntemplatesignature_textvalidation_isSet;
    bool m_e_ezsigntemplatesignature_textvalidation_isValid;

    QString m_s_ezsigntemplatesignature_textvalidationcustommessage;
    bool m_s_ezsigntemplatesignature_textvalidationcustommessage_isSet;
    bool m_s_ezsigntemplatesignature_textvalidationcustommessage_isValid;

    Field_eEzsigntemplatesignatureDependencyrequirement m_e_ezsigntemplatesignature_dependencyrequirement;
    bool m_e_ezsigntemplatesignature_dependencyrequirement_isSet;
    bool m_e_ezsigntemplatesignature_dependencyrequirement_isValid;

    QString m_s_ezsigntemplatesignature_positioningpattern;
    bool m_s_ezsigntemplatesignature_positioningpattern_isSet;
    bool m_s_ezsigntemplatesignature_positioningpattern_isValid;

    qint32 m_i_ezsigntemplatesignature_positioningoffsetx;
    bool m_i_ezsigntemplatesignature_positioningoffsetx_isSet;
    bool m_i_ezsigntemplatesignature_positioningoffsetx_isValid;

    qint32 m_i_ezsigntemplatesignature_positioningoffsety;
    bool m_i_ezsigntemplatesignature_positioningoffsety_isSet;
    bool m_i_ezsigntemplatesignature_positioningoffsety_isValid;

    Field_eEzsigntemplatesignaturePositioningoccurence m_e_ezsigntemplatesignature_positioningoccurence;
    bool m_e_ezsigntemplatesignature_positioningoccurence_isSet;
    bool m_e_ezsigntemplatesignature_positioningoccurence_isValid;

    bool m_b_ezsigntemplatesignature_customdate;
    bool m_b_ezsigntemplatesignature_customdate_isSet;
    bool m_b_ezsigntemplatesignature_customdate_isValid;

    QList<Ezsigntemplatesignaturecustomdate_RequestCompound> m_a_obj_ezsigntemplatesignaturecustomdate;
    bool m_a_obj_ezsigntemplatesignaturecustomdate_isSet;
    bool m_a_obj_ezsigntemplatesignaturecustomdate_isValid;

    QList<Ezsigntemplateelementdependency_RequestCompound> m_a_obj_ezsigntemplateelementdependency;
    bool m_a_obj_ezsigntemplateelementdependency_isSet;
    bool m_a_obj_ezsigntemplateelementdependency_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesignature_RequestCompound)

#endif // Ezsigntemplatesignature_RequestCompound_H
