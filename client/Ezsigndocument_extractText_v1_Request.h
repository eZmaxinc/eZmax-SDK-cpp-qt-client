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
 * Ezsigndocument_extractText_v1_Request.h
 *
 * Request for POST /1/object/ezsigndocument/{pkiEzsigndocumentID}/extractText
 */

#ifndef Ezsigndocument_extractText_v1_Request_H
#define Ezsigndocument_extractText_v1_Request_H

#include <QJsonObject>

#include <QString>

#include "Enum.h"
#include "Object.h"

namespace Ezmaxapi {

class Ezsigndocument_extractText_v1_Request : public Object {
public:
    Ezsigndocument_extractText_v1_Request();
    Ezsigndocument_extractText_v1_Request(QString json);
    ~Ezsigndocument_extractText_v1_Request() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    qint32 getIPage() const;
    void setIPage(const qint32 &i_page);
    bool is_i_page_Set() const;
    bool is_i_page_Valid() const;

    QString getESection() const;
    void setESection(const QString &e_section);
    bool is_e_section_Set() const;
    bool is_e_section_Valid() const;

    qint32 getIX() const;
    void setIX(const qint32 &i_x);
    bool is_i_x_Set() const;
    bool is_i_x_Valid() const;

    qint32 getIY() const;
    void setIY(const qint32 &i_y);
    bool is_i_y_Set() const;
    bool is_i_y_Valid() const;

    qint32 getIWidth() const;
    void setIWidth(const qint32 &i_width);
    bool is_i_width_Set() const;
    bool is_i_width_Valid() const;

    qint32 getIHeight() const;
    void setIHeight(const qint32 &i_height);
    bool is_i_height_Set() const;
    bool is_i_height_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    qint32 m_i_page;
    bool m_i_page_isSet;
    bool m_i_page_isValid;

    QString m_e_section;
    bool m_e_section_isSet;
    bool m_e_section_isValid;

    qint32 m_i_x;
    bool m_i_x_isSet;
    bool m_i_x_isValid;

    qint32 m_i_y;
    bool m_i_y_isSet;
    bool m_i_y_isValid;

    qint32 m_i_width;
    bool m_i_width_isSet;
    bool m_i_width_isValid;

    qint32 m_i_height;
    bool m_i_height_isSet;
    bool m_i_height_isValid;
};

} // namespace Ezmaxapi

Q_DECLARE_METATYPE(Ezmaxapi::Ezsigndocument_extractText_v1_Request)

#endif // Ezsigndocument_extractText_v1_Request_H
