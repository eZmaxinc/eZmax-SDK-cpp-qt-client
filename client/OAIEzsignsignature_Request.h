/**
 * eZmax API Definition (Full)
 * This API expose all the functionnalities for the eZmax and eZsign applications.
 *
 * The version of the OpenAPI document: 1.1.18
 * Contact: support-api@ezmax.ca
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIEzsignsignature_Request.h
 *
 * An Ezsignsignature Object
 */

#ifndef OAIEzsignsignature_Request_H
#define OAIEzsignsignature_Request_H

#include <QJsonObject>

#include "OAIEnum_Textvalidation.h"
#include "OAIField_eEzsignsignatureAttachmentnamesource.h"
#include "OAIField_eEzsignsignatureFont.h"
#include "OAIField_eEzsignsignatureTooltipposition.h"
#include "OAIField_eEzsignsignatureType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsignsignature_Request : public OAIObject {
public:
    OAIEzsignsignature_Request();
    OAIEzsignsignature_Request(QString json);
    ~OAIEzsignsignature_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getPkiEzsignsignatureId() const;
    void setPkiEzsignsignatureId(const qint32 &pki_ezsignsignature_id);
    bool is_pki_ezsignsignature_id_Set() const;
    bool is_pki_ezsignsignature_id_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationId() const;
    void setFkiEzsignfoldersignerassociationId(const qint32 &fki_ezsignfoldersignerassociation_id);
    bool is_fki_ezsignfoldersignerassociation_id_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_Valid() const;

    qint32 getIEzsignpagePagenumber() const;
    void setIEzsignpagePagenumber(const qint32 &i_ezsignpage_pagenumber);
    bool is_i_ezsignpage_pagenumber_Set() const;
    bool is_i_ezsignpage_pagenumber_Valid() const;

    qint32 getIEzsignsignatureX() const;
    void setIEzsignsignatureX(const qint32 &i_ezsignsignature_x);
    bool is_i_ezsignsignature_x_Set() const;
    bool is_i_ezsignsignature_x_Valid() const;

    qint32 getIEzsignsignatureY() const;
    void setIEzsignsignatureY(const qint32 &i_ezsignsignature_y);
    bool is_i_ezsignsignature_y_Set() const;
    bool is_i_ezsignsignature_y_Valid() const;

    qint32 getIEzsignsignatureWidth() const;
    void setIEzsignsignatureWidth(const qint32 &i_ezsignsignature_width);
    bool is_i_ezsignsignature_width_Set() const;
    bool is_i_ezsignsignature_width_Valid() const;

    qint32 getIEzsignsignatureHeight() const;
    void setIEzsignsignatureHeight(const qint32 &i_ezsignsignature_height);
    bool is_i_ezsignsignature_height_Set() const;
    bool is_i_ezsignsignature_height_Valid() const;

    qint32 getIEzsignsignatureStep() const;
    void setIEzsignsignatureStep(const qint32 &i_ezsignsignature_step);
    bool is_i_ezsignsignature_step_Set() const;
    bool is_i_ezsignsignature_step_Valid() const;

    OAIField_eEzsignsignatureType getEEzsignsignatureType() const;
    void setEEzsignsignatureType(const OAIField_eEzsignsignatureType &e_ezsignsignature_type);
    bool is_e_ezsignsignature_type_Set() const;
    bool is_e_ezsignsignature_type_Valid() const;

    qint32 getFkiEzsigndocumentId() const;
    void setFkiEzsigndocumentId(const qint32 &fki_ezsigndocument_id);
    bool is_fki_ezsigndocument_id_Set() const;
    bool is_fki_ezsigndocument_id_Valid() const;

    QString getTEzsignsignatureTooltip() const;
    void setTEzsignsignatureTooltip(const QString &t_ezsignsignature_tooltip);
    bool is_t_ezsignsignature_tooltip_Set() const;
    bool is_t_ezsignsignature_tooltip_Valid() const;

    OAIField_eEzsignsignatureTooltipposition getEEzsignsignatureTooltipposition() const;
    void setEEzsignsignatureTooltipposition(const OAIField_eEzsignsignatureTooltipposition &e_ezsignsignature_tooltipposition);
    bool is_e_ezsignsignature_tooltipposition_Set() const;
    bool is_e_ezsignsignature_tooltipposition_Valid() const;

    OAIField_eEzsignsignatureFont getEEzsignsignatureFont() const;
    void setEEzsignsignatureFont(const OAIField_eEzsignsignatureFont &e_ezsignsignature_font);
    bool is_e_ezsignsignature_font_Set() const;
    bool is_e_ezsignsignature_font_Valid() const;

    qint32 getFkiEzsignfoldersignerassociationIdValidation() const;
    void setFkiEzsignfoldersignerassociationIdValidation(const qint32 &fki_ezsignfoldersignerassociation_id_validation);
    bool is_fki_ezsignfoldersignerassociation_id_validation_Set() const;
    bool is_fki_ezsignfoldersignerassociation_id_validation_Valid() const;

    bool isBEzsignsignatureRequired() const;
    void setBEzsignsignatureRequired(const bool &b_ezsignsignature_required);
    bool is_b_ezsignsignature_required_Set() const;
    bool is_b_ezsignsignature_required_Valid() const;

    OAIField_eEzsignsignatureAttachmentnamesource getEEzsignsignatureAttachmentnamesource() const;
    void setEEzsignsignatureAttachmentnamesource(const OAIField_eEzsignsignatureAttachmentnamesource &e_ezsignsignature_attachmentnamesource);
    bool is_e_ezsignsignature_attachmentnamesource_Set() const;
    bool is_e_ezsignsignature_attachmentnamesource_Valid() const;

    QString getSEzsignsignatureAttachmentdescription() const;
    void setSEzsignsignatureAttachmentdescription(const QString &s_ezsignsignature_attachmentdescription);
    bool is_s_ezsignsignature_attachmentdescription_Set() const;
    bool is_s_ezsignsignature_attachmentdescription_Valid() const;

    qint32 getIEzsignsignatureValidationstep() const;
    void setIEzsignsignatureValidationstep(const qint32 &i_ezsignsignature_validationstep);
    bool is_i_ezsignsignature_validationstep_Set() const;
    bool is_i_ezsignsignature_validationstep_Valid() const;

    OAIEnum_Textvalidation getEEzsignsignatureTextvalidation() const;
    void setEEzsignsignatureTextvalidation(const OAIEnum_Textvalidation &e_ezsignsignature_textvalidation);
    bool is_e_ezsignsignature_textvalidation_Set() const;
    bool is_e_ezsignsignature_textvalidation_Valid() const;

    QString getSEzsignsignatureRegexp() const;
    void setSEzsignsignatureRegexp(const QString &s_ezsignsignature_regexp);
    bool is_s_ezsignsignature_regexp_Set() const;
    bool is_s_ezsignsignature_regexp_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsignsignature_id;
    bool m_pki_ezsignsignature_id_isSet;
    bool m_pki_ezsignsignature_id_isValid;

    qint32 fki_ezsignfoldersignerassociation_id;
    bool m_fki_ezsignfoldersignerassociation_id_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_isValid;

    qint32 i_ezsignpage_pagenumber;
    bool m_i_ezsignpage_pagenumber_isSet;
    bool m_i_ezsignpage_pagenumber_isValid;

    qint32 i_ezsignsignature_x;
    bool m_i_ezsignsignature_x_isSet;
    bool m_i_ezsignsignature_x_isValid;

    qint32 i_ezsignsignature_y;
    bool m_i_ezsignsignature_y_isSet;
    bool m_i_ezsignsignature_y_isValid;

    qint32 i_ezsignsignature_width;
    bool m_i_ezsignsignature_width_isSet;
    bool m_i_ezsignsignature_width_isValid;

    qint32 i_ezsignsignature_height;
    bool m_i_ezsignsignature_height_isSet;
    bool m_i_ezsignsignature_height_isValid;

    qint32 i_ezsignsignature_step;
    bool m_i_ezsignsignature_step_isSet;
    bool m_i_ezsignsignature_step_isValid;

    OAIField_eEzsignsignatureType e_ezsignsignature_type;
    bool m_e_ezsignsignature_type_isSet;
    bool m_e_ezsignsignature_type_isValid;

    qint32 fki_ezsigndocument_id;
    bool m_fki_ezsigndocument_id_isSet;
    bool m_fki_ezsigndocument_id_isValid;

    QString t_ezsignsignature_tooltip;
    bool m_t_ezsignsignature_tooltip_isSet;
    bool m_t_ezsignsignature_tooltip_isValid;

    OAIField_eEzsignsignatureTooltipposition e_ezsignsignature_tooltipposition;
    bool m_e_ezsignsignature_tooltipposition_isSet;
    bool m_e_ezsignsignature_tooltipposition_isValid;

    OAIField_eEzsignsignatureFont e_ezsignsignature_font;
    bool m_e_ezsignsignature_font_isSet;
    bool m_e_ezsignsignature_font_isValid;

    qint32 fki_ezsignfoldersignerassociation_id_validation;
    bool m_fki_ezsignfoldersignerassociation_id_validation_isSet;
    bool m_fki_ezsignfoldersignerassociation_id_validation_isValid;

    bool b_ezsignsignature_required;
    bool m_b_ezsignsignature_required_isSet;
    bool m_b_ezsignsignature_required_isValid;

    OAIField_eEzsignsignatureAttachmentnamesource e_ezsignsignature_attachmentnamesource;
    bool m_e_ezsignsignature_attachmentnamesource_isSet;
    bool m_e_ezsignsignature_attachmentnamesource_isValid;

    QString s_ezsignsignature_attachmentdescription;
    bool m_s_ezsignsignature_attachmentdescription_isSet;
    bool m_s_ezsignsignature_attachmentdescription_isValid;

    qint32 i_ezsignsignature_validationstep;
    bool m_i_ezsignsignature_validationstep_isSet;
    bool m_i_ezsignsignature_validationstep_isValid;

    OAIEnum_Textvalidation e_ezsignsignature_textvalidation;
    bool m_e_ezsignsignature_textvalidation_isSet;
    bool m_e_ezsignsignature_textvalidation_isValid;

    QString s_ezsignsignature_regexp;
    bool m_s_ezsignsignature_regexp_isSet;
    bool m_s_ezsignsignature_regexp_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsignsignature_Request)

#endif // OAIEzsignsignature_Request_H
