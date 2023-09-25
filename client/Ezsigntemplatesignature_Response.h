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
 * Ezsigntemplatesignature_Response.h
 *
 * A Ezsigntemplatesignature Object
 */

#ifndef Ezsigntemplatesignature_Response_H
#define Ezsigntemplatesignature_Response_H

#include <QJsonObject>

#include "Enum_Textvalidation.h"
#include "Field_eEzsigntemplatesignatureAttachmentnamesource.h"
#include "Field_eEzsigntemplatesignatureFont.h"
#include "Field_eEzsigntemplatesignatureTooltipposition.h"
#include "Field_eEzsigntemplatesignatureType.h"
#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigntemplatesignature_Response : public Object {
public:
    Ezsigntemplatesignature_Response();
    Ezsigntemplatesignature_Response(QString json);
    ~Ezsigntemplatesignature_Response() override;

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

    qint32 getIEzsigntemplatesignatureValidationstep() const;
    void setIEzsigntemplatesignatureValidationstep(const qint32 &i_ezsigntemplatesignature_validationstep);
    bool is_i_ezsigntemplatesignature_validationstep_Set() const;
    bool is_i_ezsigntemplatesignature_validationstep_Valid() const;

    QString getSEzsigntemplatesignatureAttachmentdescription() const;
    void setSEzsigntemplatesignatureAttachmentdescription(const QString &s_ezsigntemplatesignature_attachmentdescription);
    bool is_s_ezsigntemplatesignature_attachmentdescription_Set() const;
    bool is_s_ezsigntemplatesignature_attachmentdescription_Valid() const;

    Field_eEzsigntemplatesignatureAttachmentnamesource getEEzsigntemplatesignatureAttachmentnamesource() const;
    void setEEzsigntemplatesignatureAttachmentnamesource(const Field_eEzsigntemplatesignatureAttachmentnamesource &e_ezsigntemplatesignature_attachmentnamesource);
    bool is_e_ezsigntemplatesignature_attachmentnamesource_Set() const;
    bool is_e_ezsigntemplatesignature_attachmentnamesource_Valid() const;

    bool isBEzsigntemplatesignatureRequired() const;
    void setBEzsigntemplatesignatureRequired(const bool &b_ezsigntemplatesignature_required);
    bool is_b_ezsigntemplatesignature_required_Set() const;
    bool is_b_ezsigntemplatesignature_required_Valid() const;

    qint32 getIEzsigntemplatesignatureMaxlength() const;
    void setIEzsigntemplatesignatureMaxlength(const qint32 &i_ezsigntemplatesignature_maxlength);
    bool is_i_ezsigntemplatesignature_maxlength_Set() const;
    bool is_i_ezsigntemplatesignature_maxlength_Valid() const;

    QString getSEzsigntemplatesignatureRegexp() const;
    void setSEzsigntemplatesignatureRegexp(const QString &s_ezsigntemplatesignature_regexp);
    bool is_s_ezsigntemplatesignature_regexp_Set() const;
    bool is_s_ezsigntemplatesignature_regexp_Valid() const;

    Enum_Textvalidation getEEzsigntemplatesignatureTextvalidation() const;
    void setEEzsigntemplatesignatureTextvalidation(const Enum_Textvalidation &e_ezsigntemplatesignature_textvalidation);
    bool is_e_ezsigntemplatesignature_textvalidation_Set() const;
    bool is_e_ezsigntemplatesignature_textvalidation_Valid() const;

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

    QString m_t_ezsigntemplatesignature_tooltip;
    bool m_t_ezsigntemplatesignature_tooltip_isSet;
    bool m_t_ezsigntemplatesignature_tooltip_isValid;

    Field_eEzsigntemplatesignatureTooltipposition m_e_ezsigntemplatesignature_tooltipposition;
    bool m_e_ezsigntemplatesignature_tooltipposition_isSet;
    bool m_e_ezsigntemplatesignature_tooltipposition_isValid;

    Field_eEzsigntemplatesignatureFont m_e_ezsigntemplatesignature_font;
    bool m_e_ezsigntemplatesignature_font_isSet;
    bool m_e_ezsigntemplatesignature_font_isValid;

    qint32 m_i_ezsigntemplatesignature_validationstep;
    bool m_i_ezsigntemplatesignature_validationstep_isSet;
    bool m_i_ezsigntemplatesignature_validationstep_isValid;

    QString m_s_ezsigntemplatesignature_attachmentdescription;
    bool m_s_ezsigntemplatesignature_attachmentdescription_isSet;
    bool m_s_ezsigntemplatesignature_attachmentdescription_isValid;

    Field_eEzsigntemplatesignatureAttachmentnamesource m_e_ezsigntemplatesignature_attachmentnamesource;
    bool m_e_ezsigntemplatesignature_attachmentnamesource_isSet;
    bool m_e_ezsigntemplatesignature_attachmentnamesource_isValid;

    bool m_b_ezsigntemplatesignature_required;
    bool m_b_ezsigntemplatesignature_required_isSet;
    bool m_b_ezsigntemplatesignature_required_isValid;

    qint32 m_i_ezsigntemplatesignature_maxlength;
    bool m_i_ezsigntemplatesignature_maxlength_isSet;
    bool m_i_ezsigntemplatesignature_maxlength_isValid;

    QString m_s_ezsigntemplatesignature_regexp;
    bool m_s_ezsigntemplatesignature_regexp_isSet;
    bool m_s_ezsigntemplatesignature_regexp_isValid;

    Enum_Textvalidation m_e_ezsigntemplatesignature_textvalidation;
    bool m_e_ezsigntemplatesignature_textvalidation_isSet;
    bool m_e_ezsigntemplatesignature_textvalidation_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigntemplatesignature_Response)

#endif // Ezsigntemplatesignature_Response_H
