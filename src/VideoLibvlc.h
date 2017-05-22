//
//  native_play
//

#pragma once

class VideoLibvlc: public ouzel::scene::Component
{
public:
    VideoLibvlc();
    virtual ~VideoLibvlc();

    virtual bool init(const std::string& stream);

    virtual void update(float delta);
    virtual void draw(const ouzel::Matrix4& transformMatrix,
                      const ouzel::Color& drawColor,
                      const ouzel::Matrix4& renderViewProjection,
                      const std::shared_ptr<ouzel::graphics::Texture>& renderTarget,
                      const ouzel::Rectangle& renderViewport,
                      bool depthWrite,
                      bool depthTest,
                      bool wireframe,
                      bool scissorTest,
                      const ouzel::Rectangle& scissorRectangle) override;

protected:
    std::shared_ptr<ouzel::graphics::Texture> texture;
    std::shared_ptr<ouzel::graphics::Shader> shader;
    std::shared_ptr<ouzel::graphics::BlendState> blendState;
    std::shared_ptr<ouzel::graphics::MeshBuffer> meshBuffer;
    std::shared_ptr<ouzel::graphics::Buffer> indexBuffer;
    std::shared_ptr<ouzel::graphics::Buffer> vertexBuffer;

    ouzel::UpdateCallback updateCallback;
};