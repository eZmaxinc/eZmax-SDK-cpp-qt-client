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
 * OAIEzsigntemplatesignature_Request.h
 *
 * A Ezsigntemplatesignature Object
 */

#ifndef OAIEzsigntemplatesignature_Request_H
#define OAIEzsigntemplatesignature_Request_H

#include <QJsonObject>

#include "OAIField_eEzsigntemplatesignatureAttachmentnamesource.h"
#include "OAIField_eEzsigntemplatesignatureFont.h"
#include "OAIField_eEzsigntemplatesignatureTooltipposition.h"
#include "OAIField_eEzsigntemplatesignatureType.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace OpenAPI {

class OAIEzsigntemplatesignature_Request : public OAIObject {
public:
    OAIEzsigntemplatesignature_Request();
    OAIEzsigntemplatesignature_Request(QString json);
    ~OAIEzsigntemplatesignature_Request() override;

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

    qint32 getIEzsigntemplatesignatureStep() const;
    void setIEzsigntemplatesignatureStep(const qint32 &i_ezsigntemplatesignature_step);
    bool is_i_ezsigntemplatesignature_step_Set() const;
    bool is_i_ezsigntemplatesignature_step_Valid() const;

    OAIField_eEzsigntemplatesignatureType getEEzsigntemplatesignatureType() const;
    void setEEzsigntemplatesignatureType(const OAIField_eEzsigntemplatesignatureType &e_ezsigntemplatesignature_type);
    bool is_e_ezsigntemplatesignature_type_Set() const;
    bool is_e_ezsigntemplatesignature_type_Valid() const;

    QString getTEzsigntemplatesignatureTooltip() const;
    void setTEzsigntemplatesignatureTooltip(const QString &t_ezsigntemplatesignature_tooltip);
    bool is_t_ezsigntemplatesignature_tooltip_Set() const;
    bool is_t_ezsigntemplatesignature_tooltip_Valid() const;

    OAIField_eEzsigntemplatesignatureTooltipposition getEEzsigntemplatesignatureTooltipposition() const;
    void setEEzsigntemplatesignatureTooltipposition(const OAIField_eEzsigntemplatesignatureTooltipposition &e_ezsigntemplatesignature_tooltipposition);
    bool is_e_ezsigntemplatesignature_tooltipposition_Set() const;
    bool is_e_ezsigntemplatesignature_tooltipposition_Valid() const;

    OAIField_eEzsigntemplatesignatureFont getEEzsigntemplatesignatureFont() const;
    void setEEzsigntemplatesignatureFont(const OAIField_eEzsigntemplatesignatureFont &e_ezsigntemplatesignature_font);
    bool is_e_ezsigntemplatesignature_font_Set() const;
    bool is_e_ezsigntemplatesignature_font_Valid() const;

    bool isBEzsigntemplatesignatureRequired() const;
    void setBEzsigntemplatesignatureRequired(const bool &b_ezsigntemplatesignature_required);
    bool is_b_ezsigntemplatesignature_required_Set() const;
    bool is_b_ezsigntemplatesignature_required_Valid() const;

    OAIField_eEzsigntemplatesignatureAttachmentnamesource getEEzsigntemplatesignatureAttachmentnamesource() const;
    void setEEzsigntemplatesignatureAttachmentnamesource(const OAIField_eEzsigntemplatesignatureAttachmentnamesource &e_ezsigntemplatesignature_attachmentnamesource);
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

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 pki_ezsigntemplatesignature_id;
    bool m_pki_ezsigntemplatesignature_id_isSet;
    bool m_pki_ezsigntemplatesignature_id_isValid;

    qint32 fki_ezsigntemplatedocument_id;
    bool m_fki_ezsigntemplatedocument_id_isSet;
    bool m_fki_ezsigntemplatedocument_id_isValid;

    qint32 fki_ezsigntemplatesigner_id;
    bool m_fki_ezsigntemplatesigner_id_isSet;
    bool m_fki_ezsigntemplatesigner_id_isValid;

    qint32 fki_ezsigntemplatesigner_id_validation;
    bool m_fki_ezsigntemplatesigner_id_validation_isSet;
    bool m_fki_ezsigntemplatesigner_id_validation_isValid;

    qint32 i_ezsigntemplatedocumentpage_pagenumber;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isSet;
    bool m_i_ezsigntemplatedocumentpage_pagenumber_isValid;

    qint32 i_ezsigntemplatesignature_x;
    bool m_i_ezsigntemplatesignature_x_isSet;
    bool m_i_ezsigntemplatesignature_x_isValid;

    qint32 i_ezsigntemplatesignature_y;
    bool m_i_ezsigntemplatesignature_y_isSet;
    bool m_i_ezsigntemplatesignature_y_isValid;

    qint32 i_ezsigntemplatesignature_step;
    bool m_i_ezsigntemplatesignature_step_isSet;
    bool m_i_ezsigntemplatesignature_step_isValid;

    OAIField_eEzsigntemplatesignatureType e_ezsigntemplatesignature_type;
    bool m_e_ezsigntemplatesignature_type_isSet;
    bool m_e_ezsigntemplatesignature_type_isValid;

    QString t_ezsigntemplatesignature_tooltip;
    bool m_t_ezsigntemplatesignature_tooltip_isSet;
    bool m_t_ezsigntemplatesignature_tooltip_isValid;

    OAIField_eEzsigntemplatesignatureTooltipposition e_ezsigntemplatesignature_tooltipposition;
    bool m_e_ezsigntemplatesignature_tooltipposition_isSet;
    bool m_e_ezsigntemplatesignature_tooltipposition_isValid;

    OAIField_eEzsigntemplatesignatureFont e_ezsigntemplatesignature_font;
    bool m_e_ezsigntemplatesignature_font_isSet;
    bool m_e_ezsigntemplatesignature_font_isValid;

    bool b_ezsigntemplatesignature_required;
    bool m_b_ezsigntemplatesignature_required_isSet;
    bool m_b_ezsigntemplatesignature_required_isValid;

    OAIField_eEzsigntemplatesignatureAttachmentnamesource e_ezsigntemplatesignature_attachmentnamesource;
    bool m_e_ezsigntemplatesignature_attachmentnamesource_isSet;
    bool m_e_ezsigntemplatesignature_attachmentnamesource_isValid;

    QString s_ezsigntemplatesignature_attachmentdescription;
    bool m_s_ezsigntemplatesignature_attachmentdescription_isSet;
    bool m_s_ezsigntemplatesignature_attachmentdescription_isValid;

    qint32 i_ezsigntemplatesignature_validationstep;
    bool m_i_ezsigntemplatesignature_validationstep_isSet;
    bool m_i_ezsigntemplatesignature_validationstep_isValid;
};

} // namespace OpenAPI

Q_DECLARE_METATYPE(OpenAPI::OAIEzsigntemplatesignature_Request)

#endif // OAIEzsigntemplatesignature_Request_H
